#include "GameManager.h"

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
}

void GameManager::start()
{
	WindowEngine.set_Window(800, 600, false);
	WindowEngine.Define_View_Port(0 , 0);
	GAME.start();
	
}

void GameManager::Update()
{
	GAME.update();
	WindowEngine.Define_View_Port(0, 0);
	GL_Update();
}

void GameManager::GL_Update()
{
	glClearColor(0.1f, 0.12f, 0.1f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(WindowEngine.Get_Window());
	glfwPollEvents();
}

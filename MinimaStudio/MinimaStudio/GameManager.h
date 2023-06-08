#pragma once
#ifndef GAME_MANAGER
#define GAME_MANAGER
#include "Font_Shader.h"
#include "window.h"
#include "systemStart.h"
#include "camera.h"
#include "game.h"

void processInput(GLFWwindow* window);

window Window;
camera cam;


void awake() {
	startGLFW();
	Window.createWindow(1920, 1080,true);
	startGlad();
}

void start(Shader ourShader) {
	startGame(ourShader);
	cam.cameraSetFov(10);
}

void update(Shader ourShader) {
	
	processInput(Window.GetWindow());
	cam.cameraUpdate(ourShader, Window);

	updateGame(ourShader, cam, Window);

	glfwSwap(Window.GetWindow());
}

void quit() {
	quitGame();
	glfwTerminate();
}
void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
#endif // !GAME_MANAGER


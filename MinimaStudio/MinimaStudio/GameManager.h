#pragma once
#ifndef GAME_MANAGER
#define GAME_MANAGER
#include "Font_Shader.h"
#include "window.h"
#include "systemStart.h"
#include "camera.h"
#include "game.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

window Window;
camera cam;


void awake() {
	startGLFW();
	Window.createWindow(800, 600);
	glfwSetFramebufferSizeCallback(Window.GetWindow(), framebuffer_size_callback);
	startGlad();
}

void start(Shader ourShader) {
	startGame(ourShader);
}

void update(Shader ourShader) {
	processInput(Window.GetWindow());
	clearWindow();
	cam.cameraUpdate(ourShader, Window);

	updateGame(ourShader);

	glfwSwap(Window.GetWindow());
}

void quit() {
	quitGame();
	glfwTerminate();
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}
void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}
#endif // !GAME_MANAGER


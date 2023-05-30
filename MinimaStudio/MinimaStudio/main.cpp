#pragma once
#ifndef MAIN_H
#define MAIN_H

#include "GameManager.h"

void processInput(GLFWwindow* window);
void initGLFW();

GameManager gameMenager;

int main()
{
    initGLFW();

    gameMenager.start();


    while (!glfwWindowShouldClose(gameMenager.WindowEngine.Get_Window()))
    {
        processInput(gameMenager.WindowEngine.Get_Window());

        gameMenager.Update();
    }

    glfwTerminate();
    return 0;
}

void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void initGLFW()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

#endif // !MAIN_H

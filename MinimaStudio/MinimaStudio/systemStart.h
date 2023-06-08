#pragma once
#ifndef SYSTEM_START
#define SYSTEM_START
#include "allIncludes.h"
int startGlad() {
    // glad: load all OpenGL function pointers
        // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glEnable(GL_DEPTH_TEST);

};
void startGLFW() {
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

};

void glfwSwap(GLFWwindow* window) {
    glfwSwapBuffers(window);
    glfwPollEvents();
};
#endif // !SYSTEM_START


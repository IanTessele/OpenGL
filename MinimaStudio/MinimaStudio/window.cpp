#include "window.h"

window::window()
{
}

window::~window()
{
}

void window::createWindow(int _SCR_WIDTH, int _SCR_HEIGHT)
{
    SCR_WIDTH = _SCR_WIDTH;
    SCR_HEIGHT = _SCR_HEIGHT;

    _Window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (_Window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(_Window);
}

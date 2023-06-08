#include "window.h"

window::window()
{
}

window::~window()
{
}

void window::createWindow(int _SCR_WIDTH, int _SCR_HEIGHT, bool fullScreem)
{
    SCR_WIDTH = _SCR_WIDTH;
    SCR_HEIGHT = _SCR_HEIGHT;

    switch (fullScreem)
    {
    case true:
        _Window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", glfwGetPrimaryMonitor(), nullptr);
        break;
    case false:
        _Window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
        break;
    default:
        _Window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
        break;
    }


    if (_Window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }
    glfwMakeContextCurrent(_Window);
}

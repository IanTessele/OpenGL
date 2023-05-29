#include "window.h"

window::window()
{
}

window::~window()
{
}

void window::set_Window(const int width, const int height, bool fullScreem)
{
	WIDTH = width;
	HEIGHT = height;

	switch (fullScreem)
	{
	case true:
		Window = glfwCreateWindow(WIDTH, HEIGHT, "Minima Studio", glfwGetPrimaryMonitor(), nullptr);
		Window_Context();
		break;
	case false:
		Window = glfwCreateWindow(WIDTH, HEIGHT, "Minima Studio", nullptr, nullptr);
		Window_Context();
		break;
	default:
		Window = glfwCreateWindow(WIDTH, HEIGHT, "Minima Studio", nullptr, nullptr);
		Window_Context();
		break;
	}

}

void window::Window_Context()
{
	glfwMakeContextCurrent(Window);
	glClearColor(0.1f, 0.3f, 0.3f, 1.0f);

}

void window::Define_View_Port(float xView, float yView)
{
	glfwGetFramebufferSize(Window, &Width_ViewP, &Height_ViewP);
	glViewport(xView,yView,Width_ViewP,Height_ViewP);
}

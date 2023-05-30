#pragma once
#ifndef WINDOW_H
#define WINDOW_H

#include "OpenGL_Includes.h"

class window
{
public:
	window();
	~window();

	void set_Window(const int width, const int height, bool fullScreem);
	void Window_Context();
	void Define_View_Port(float xView, float yView);

	GLint Get_Width() { return WIDTH; };
	GLint Get_Height() { return HEIGHT; };
	GLFWwindow* Get_Window() { return Window; };

private:
	GLint WIDTH, HEIGHT;
	GLFWwindow* Window;
	int Width_ViewP, Height_ViewP; 
};

#endif // !WINDOW_H

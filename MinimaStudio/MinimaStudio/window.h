#pragma once
#ifndef WINDOW
#define WINDOW
#include "allIncludes.h"

class window
{
public:
	window();
	~window();

	GLFWwindow* GetWindow() { return _Window; }
	int getWidth() { return SCR_WIDTH; };
	int getHeight() { return SCR_HEIGHT; };

	void createWindow(int _SCR_WIDTH,int _SCR_HEIGHT);
private:
	
	GLFWwindow* _Window;
	int SCR_WIDTH;
	int SCR_HEIGHT;

};

#endif // !WINDOW

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <iostream>
#include "window.h"
class GameManager
{
public:
	GameManager();
	~GameManager();

	window WindowEngine;

	void start();
	void Update();

private:
	void GL_Update();
};
#endif 
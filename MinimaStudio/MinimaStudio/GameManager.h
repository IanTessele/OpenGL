#pragma once
#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "window.h"
#include "game.h"
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
	game GAME;
};
#endif 
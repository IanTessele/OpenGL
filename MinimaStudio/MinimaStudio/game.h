#pragma once
#ifndef GAME
#define GAME
#include "plane.h"

plane Plane;

void startGame(Shader ourShader) {
	//mudar para textures/container.jpg//
	Plane.loadPlane(ourShader, "../textures/container.jpg");
	//para a build funcionar//
}

void updateGame(Shader ourShader) {
	Plane.Draw(ourShader);
}

void quitGame() {
	Plane.Delete();
}

#endif // !GAME

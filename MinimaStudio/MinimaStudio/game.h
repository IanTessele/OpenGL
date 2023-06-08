#pragma once
#ifndef GAME
#define GAME
#include "Player.h"
player Player;
Sprite fundo;

void startGame(Shader ourShader) {
	//mudar para textures/container.jpg//
	Player.loadPlane(ourShader, "../textures/container.jpg");
	fundo.loadPlane(ourShader, "../textures/grass.png");
	fundo.Transform.Scale = glm::vec3(8.0f,8.0f,1.0f);
	//para a build funcionar//
}

void updateGame(Shader ourShader, camera cam, window window) {
	cam.cameraFollow(Player.Transform.Position, ourShader);
	Player.Draw(ourShader);
	fundo.Draw(ourShader);
	Player.movePlayer(window);
	Player.testColliders(Player,fundo);

}

void quitGame() {
	Player.Delete();
	fundo.Delete();

}

#endif // !GAME

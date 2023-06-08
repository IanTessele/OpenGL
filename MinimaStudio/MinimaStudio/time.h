#pragma once
#ifndef DELTA_TIME
#define DELTA_TIME

#include <glfw/glfw3.h>

void DeltaTime() {

	float lastFrame = 0.0f;
	float fps = 60.0f;
	float currentFrame;
	float deltaTime;

	do {
		currentFrame = (float)glfwGetTime();
		deltaTime = currentFrame - lastFrame;
	} while (deltaTime < 1.0f / fps);
		lastFrame = currentFrame;
};

#endif // !TIME

#pragma once
#ifndef CAMERA
#define CAMERA
#include "allIncludes.h"
#include "Font_Shader.h"
#include "window.h"
class camera
{
public:
	camera();
	~camera();

	void cameraUpdate(Shader ourShader, window Window);
	void cameraFollow(glm::vec3 target, Shader ourShader);
	void cameraSetFov(int fov);

	// create transformations
	glm::mat4 view; // make sure to initialize matrix to identity matrix first
	glm::mat4 projection;
	glm::vec3 cameraPos;
	float FOV;
};

#endif // !CAMERA
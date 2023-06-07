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
	void cameraFollow(glm::vec3 target);

	glm::vec3 cameraPos;
	float FOV;
};

#endif // !CAMERA
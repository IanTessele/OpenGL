#pragma once
#ifndef TRANSFORM
#define TRANSFORM
#include "Font_Shader.h"
#include "allIncludes.h"
class transform {

public:
	transform();
	~transform();
	
	float angle = 0.0f;
	glm::vec3 Position = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::vec3 Rotation = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::vec3 Scale = glm::vec3(1.0f, 1.0f, 1.0f);
	void setPosition(glm::vec3 pos) { Position = pos; };
	void setRotation(glm::vec3 rot) { Rotation = rot; };
	void setScale(glm::vec3 sca) { Scale = sca; };

	void update(Shader ourShader);
};

#endif // !VECTOR
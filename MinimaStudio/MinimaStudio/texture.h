#pragma once
#ifndef TEXTURE
#define TEXTURE
#include "Font_Shader.h"
#include "allIncludes.h"
class texture
{
public:
	void loadTexture(Shader ourShader, const char* fileTexture);
	void draw();

private:
	unsigned int texture1;
	int width, height, nrChannels;
};
#endif // !TEXTURE

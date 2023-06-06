#pragma once
#ifndef TEXTURE
#define TEXTURE
#include <STB/stb_image.h>
#include <glad/glad.h>
#include "Font_Shader.h"
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

#pragma once
#ifndef MESH
#define MESH
#include "Font_Shader.h"
class mesh
{
public:
	const void createMesh();
	void draw();
	const void Delete();
private:
	unsigned int VBO, VAO, EBO;
};

#endif // !MESH

#include "planeMesh.h"

planeMesh::planeMesh()
{
}

planeMesh::~planeMesh()
{
}

const void planeMesh::setMesh(GLfloat posX,GLfloat posY,GLfloat sizeX,GLfloat sizeY)
{
	this->setTexParam(posX, posY, sizeX, sizeY);

	float vertices[] = {
		// positions                 // texture coords
		0.5f, 0.5f, 0.0f,    -0.5f,  0.0f,  0.0f   , sizeX* sizeX , sizeY + (1 / posY), // top right
		0.5f, -0.5f, 0.0f,   -0.5f,  0.0f,  0.0f  , sizeX* sizeX , sizeY* sizeY, // bottom right
		-0.5f, -0.5f, 0.0f,  -0.5f,  0.0f,  0.0f   , -(1 / posX) + sizeX , sizeY* sizeY, // bottom left
		-0.5f, 0.5f, 0.0f,   -0.5f,  0.0f,  0.0f   ,  -(1 / posX) + sizeX , sizeY + (1 / posY)  // top left 
	};

	unsigned int indices[] = {
	0, 1, 3, // first triangle
	1, 2, 3  // second triangle
	};

	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);

	glBindVertexArray(VAO);

	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);

	// texture coord attribute
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
	glEnableVertexAttribArray(2);

	// normal attribute
	glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
	glEnableVertexAttribArray(3);
}

const void planeMesh::Draw()
{
	glBindVertexArray(VAO);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}

const void planeMesh::Delete()
{
	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
}

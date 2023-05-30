#ifndef MESH_BASE
#define MESH_BASE

#include <GL/glew.h>


class mesh_Base {

public:
	const GLchar* vertexShaderSource;
	const GLchar* fragmentShaderSource;
	GLuint vertexShader;
	GLuint fragmentShader;
	GLint success;
	GLchar infoLog[512];
	GLuint shaderProgram;
	GLuint VBO, VAO, EBO;
	GLint colorLoc;
		

	GLfloat texPosX, texPosY, texSizeX, texSizeY;

	void setTexPos(GLfloat X, GLfloat Y){
		texPosX = X;
		texPosY = Y;
	}
	void setTexSize(GLfloat sizeX, GLfloat sizeY) {
		texSizeX = sizeX;
		texSizeY = sizeY;
	}
	void setTexParam(GLfloat posX, GLfloat posY, GLfloat sizeX, GLfloat sizeY) {
		setTexPos(posX,posY);
		setTexSize(sizeX,sizeY);
	}

	virtual const void setMesh(
		GLfloat posX,
		GLfloat posY,
		GLfloat sizeX,
		GLfloat sizeY) = 0;
	virtual const void Draw() = 0;
	virtual const void Delete() = 0;
};

#endif // !MESH_BASE

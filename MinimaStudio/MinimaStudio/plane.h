#pragma once
#ifndef PLANE
#define PLANE
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include "Font_Shader.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <STB/stb_image.h>
class plane
{
public:

    plane();
    ~plane();
    const void Set_Mesh(Shader ourShader);
    const void LoadTexture(Shader ourShader);
    const void Draw(Shader ourShader) ;
    const void Delete();
    unsigned int VBO, VAO, EBO;
    unsigned int texture1;
    int width, height, nrChannels;

};

#endif // !PLANE

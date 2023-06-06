#pragma once
#ifndef PLANE
#define PLANE
#include <glad/glad.h>
#include <glfw/glfw3.h>
#include "Font_Shader.h"
#include "transform.h"
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <STB/stb_image.h>
#include "texture.h"
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
    transform Transform;
    texture Texture;
};

#endif // !PLANE

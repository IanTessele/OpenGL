#pragma once
#ifndef PLANE
#define PLANE
#include "Font_Shader.h"
#include "transform.h"
#include "texture.h"
#include "mesh.h"
class plane
{
public:

    plane();
    ~plane();
    const void loadPlane(Shader ourShader, const char* fileTexture);
    void Draw(Shader ourShader) ;
    const void Delete();
    transform Transform;
    texture Texture;
    mesh Mesh;
};

#endif // !PLANE

#include "plane.h"

plane::plane()
{
    Transform.angle = 0.0f;
    Transform.Rotation = glm::vec3(0.0f, 0.0f, 1.0f);
    Transform.setScale(glm::vec3(0.5f, 0.5f, 0.5f));
}

plane::~plane()
{
}

const void plane::loadPlane(Shader ourShader, const char* fileTexture)
{

    Mesh.createMesh();
    Texture.loadTexture(ourShader, fileTexture);
}


void plane::Draw(Shader ourShader)
{
    Texture.draw();
    Transform.update(ourShader);
    ourShader.use();
    Mesh.draw();

}

const void plane::Delete()
{
    Mesh.Delete();
}

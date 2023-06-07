#include "camera.h"

camera::camera()
{
    cameraPos = glm::vec3(0.0f, 0.0f, -3.0f);
    FOV = 45.0f;
}

camera::~camera()
{
}

void camera::cameraUpdate(Shader ourShader, window Window)
{
    // create transformations
    glm::mat4 view = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    glm::mat4 projection = glm::mat4(1.0f);
    projection = glm::perspective(glm::radians(FOV), (float)Window.getWidth() / (float)Window.getHeight(), 0.1f, 100.0f);
    view = glm::translate(view, cameraPos);
    // pass transformation matrices to the shader
    ourShader.setMat4("projection", projection); // note: currently we set the projection matrix each frame, but since the projection matrix rarely changes it's often best practice to set it outside the main loop only once.
    ourShader.setMat4("view", view);
}

void camera::cameraFollow(glm::vec3 target)
{
    cameraPos = glm::vec3(target.x,target.y,cameraPos.z);
}




#include "camera.h"

camera::camera()
{
    cameraPos = glm::vec3(0.0f, 0.0f, -1.0f);
    FOV = 3.0f;

}

camera::~camera()
{
}

void camera::cameraUpdate(Shader ourShader, window Window)
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    int h = Window.getHeight();
    int w = Window.getWidth();

    glfwGetFramebufferSize(Window.GetWindow(), &w, &h);
    glViewport(0 ,0 , Window.getWidth(), Window.getHeight());

    // create transformations
    view = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    projection = glm::mat4(1.0f);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    float aspect = (float)Window.getWidth() / (float)Window.getHeight();
    
    if (Window.getWidth() >= Window.getHeight()) {
        projection = glm::ortho(-FOV * aspect, FOV * aspect, -FOV , FOV, 2.0f, -2.0f);
    }
    else
    {
        projection = glm::ortho(-FOV, FOV , -FOV / aspect, FOV / aspect, 2.0f, -2.0f);
    }
    
    view = glm::translate(view, cameraPos);
    // pass transformation matrices to the shader
    ourShader.setMat4("projection", projection); // note: currently we set the projection matrix each frame, but since the projection matrix rarely changes it's often best practice to set it outside the main loop only once.
    ourShader.setMat4("view", view);
}

void camera::cameraFollow(glm::vec3 target, Shader ourShader)
{
    cameraPos = glm::vec3(-target.x,-target.y,cameraPos.z);
    view = glm::translate(view, cameraPos);
    ourShader.setMat4("view", view);
}

void camera::cameraSetFov(int fov)
{
    FOV = fov;
}




#include "transform.h"

transform::transform()
{
}

transform::~transform()
{
}

void transform::update(Shader ourShader)
{
    // create transformations
    glm::mat4 Transform = glm::mat4(1.0f); // make sure to initialize matrix to identity matrix first
    Transform = glm::translate(Transform, Position);
    Transform = glm::rotate(Transform, angle, Rotation);
    Transform = glm::scale(Transform, Scale);

    unsigned int transformLoc = glGetUniformLocation(ourShader.ID, "transform");
    glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(Transform));

}

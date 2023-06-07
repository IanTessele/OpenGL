#pragma once
#ifndef TIME
#define TIME
#include "allIncludes.h"
float deltaTime() {
    float currentFrame = static_cast<float>(glfwGetTime());
    float lastFrame = currentFrame;
    float deltaTime = currentFrame - lastFrame;

    return deltaTime;
}

#endif // !TIME

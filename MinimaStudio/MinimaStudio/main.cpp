#pragma once
#ifndef MAIN
#define MAIN
#include "GameManager.h"

int main()
{

    awake();
    //mudar para "shaders/3.3.shader.vs", "shaders/3.3.shader.fs"//
    Shader ourShader = Shader("../shaders/3.3.shader.vs", "../shaders/3.3.shader.fs");
    //para a build funcionar//

    start(ourShader);

    while (!glfwWindowShouldClose(Window.GetWindow()))
    {


        update(ourShader);

    }

    quit();
    return 0;
}


#endif // !MAIN

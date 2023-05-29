#include <glfw/glfw3.h>
#include <iostream>

int main(void)
{
    

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(800, 600, "Hello World", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);


    std::cout << "Comany: Minima Studio" << std::endl;
    std::cout << "Model: " << glGetString(GL_RENDERER) << std::endl;
    std::cout << "OPENGL: " << glGetString(GL_VERSION) << std::endl;

    glClearColor(0.1,0.1,0.1,1.0);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
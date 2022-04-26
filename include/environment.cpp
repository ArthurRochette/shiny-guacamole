#include "environment.hpp"
#include <iostream>

void ErrorCallback(int, const char *err_str);

Environment::Environment(){
    glfwSetErrorCallback(ErrorCallback);
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return;
    }
    this->window = glfwCreateWindow(640, 480, "my window", NULL, NULL);
    if (this->window == NULL)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }
}

void Environment::start(){
    
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwDestroyWindow(window);
    
}

void ErrorCallback(int, const char *err_str)
{
    std::cout << "GLFW Error: " << err_str << std::endl;
}

// hello world
#define GLFW_INCLUDE_NONE

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#include "include/context.hpp"

void ErrorCallback(int, const char *err_str);

int main()
{
    glfwSetErrorCallback(ErrorCallback);
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    GLFWwindow *window = glfwCreateWindow(640, 480, "my window", NULL, NULL);
    if (window == NULL)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwDestroyWindow(window);
    Context *ct = new Context;
    return 0;
}

void ErrorCallback(int, const char *err_str)
{
    std::cout << "GLFW Error: " << err_str << std::endl;
}

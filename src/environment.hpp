#ifndef ENV_HPP
#define ENV_HPP
#define GLFW_INCLUDE_NONE

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// create class inhertiting from glfwwindow
class Environment
{
private:
    GLFWwindow *window;

public:
    Environment();
    void start();
};

#endif // CONTEXT_HPP
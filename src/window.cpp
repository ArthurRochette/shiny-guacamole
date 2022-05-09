#include "window.hpp"
#include <stdexcept>

SG::Window::Window(int x, int y, char const *name, Vector2f pos)
{
    window = glfwCreateWindow(x, y, name, NULL, NULL);
    if (window == nullptr)
    {
        throw std::runtime_error("Failed to create GLFW window");
    }
    this->pos = pos;
}

SG::Window::Window(int x, int y, char const *name)
{
    window = glfwCreateWindow(x, y, name, NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGL();
    if (window == nullptr)
    {
        throw std::runtime_error("Failed to create GLFW window");
    }
    this->pos.x = 0;
    this->pos.y = 0;
}
void SG::Window::render()
{
    glfwMakeContextCurrent(window);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
}

GLFWwindow * const SG::Window::getWindow(){
    return window;
}
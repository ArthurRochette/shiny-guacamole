#include "window.hpp"
#include <stdexcept>


SG::Window::Window(vec2i size, char const *name ){
    window = glfwCreateWindow(size.x, size.y, name, NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGL();
    if (window == nullptr)
    {
        throw std::runtime_error("Failed to create GLFW window");
    }
    this->size = size;
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
    this->size = vec2i(x, y);

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
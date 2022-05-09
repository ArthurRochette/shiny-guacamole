#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#include "vectors.hpp"

namespace SG
{
    class Window
    {
    public:
        Window(int x, int y, char const *name, Vector2f pos);
        Window(int x, int y, char const *name);

        void render();
        GLFWwindow *const getWindow();

    private:
        GLFWwindow *window;
        Vector2f pos;
    };
}

#endif // WINDOW_HPP
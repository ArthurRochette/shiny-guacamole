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
        Window(vec2i size, vec2i pos, char const *name );
        Window(int x_size, int y_size, int x_pos , int y_pos, char const *name);

        void render();
        GLFWwindow *const getWindow();

    private:
        GLFWwindow *window;
        vec2i size;
        vec2i pos;
    };
}

#endif // WINDOW_HPP
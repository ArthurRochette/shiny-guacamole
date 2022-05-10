#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>

#include "vectors2.hpp"
#include "shape.hpp"

namespace SG
{
    class Window
    {
    public:
        Window(vec2i size, vec2i pos, char const *name );
        Window(int x_size, int y_size, int x_pos , int y_pos, char const *name);

        void render();
        void addShape(Shape *shape);
        GLFWwindow *const getWindow();

    private:
        GLFWwindow *window;
        std::vector<Shape*> shapes;
        vec2i size;
        vec2i pos;
    };
}

#endif // WINDOW_HPP
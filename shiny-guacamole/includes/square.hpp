#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "shape.hpp"

class Square: public Shape{
    public:
    Square(glm::vec3 pos, glm::vec2 size);
    private:
    float vertices[12] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
    };
    unsigned int indices[6] = {
        0, 1, 2,
        2, 3, 0
    };


};

#endif // SQUARE_HPP
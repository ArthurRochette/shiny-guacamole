#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

class Triangle : public Shape {
    public:
    Triangle(glm::vec3 pos, glm::vec2 size);
    Triangle(float x, float y, float z);
    private:
    float vertices[9] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f, 0.5f, 0.0f
    };
    unsigned int indices[3] = {
        0, 1, 2
    };
};

#endif // TRIANGLE_HPP
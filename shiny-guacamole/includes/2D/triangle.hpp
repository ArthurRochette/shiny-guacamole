#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.hpp"

/**
 * @brief Triangle class
 */
class Triangle : public Shape {
    public:
    Triangle(glm::vec3 pos, glm::vec2 size);
    Triangle(float x, float y, float z);
};

#endif // TRIANGLE_HPP
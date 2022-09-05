#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "shape.hpp"

/**
 * @brief Square class
 */
class Square: public Shape{
    public:
    Square(glm::vec3 pos, glm::vec2 size);
    Square(float x, float y, float z);
    Square(float x, float y, float z, float width, float height);

};

#endif // SQUARE_HPP
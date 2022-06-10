#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "shape.hpp"

class Square: public Shape{
    Square(float posX, float posY, float posZ);
    Square(glm::vec3 newPosition);


};

#endif // SQUARE_HPP
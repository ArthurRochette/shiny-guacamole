#include "square.hpp"

Square::Square(float posX, float posY, float posZ) : Shape(posX, posY, posZ)
{
    vertices = new float[12]{
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
    };

    indices = new unsigned int[6]{
        0, 1, 2,
        2, 3, 0
    };

}

Square::Square(glm::vec3 newPosition) : Shape(newPosition)
{
    vertices = new float[12]{
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f
    };
        indices = new unsigned int[6]{
        0, 1, 2,
        2, 3, 0
    };
}
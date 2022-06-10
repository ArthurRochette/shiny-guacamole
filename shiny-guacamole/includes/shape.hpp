#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "glm/gtc/matrix_transform.hpp"


class Shape
{
    public:
    Shape(float posX, float posY, float posZ);
    Shape(glm::vec3 newPosition);
    void render();
    protected:
    float *vertices;
    unsigned int *indices;
    glm::vec3 position;
    private:
    unsigned int VAO, VBO, EBO;

};

#endif // SHAPE_HPP
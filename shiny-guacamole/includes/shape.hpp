#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/gtc/matrix_transform.hpp"

#include <iostream>


class Shape
{
    public:
    Shape(float *newVertices, unsigned int *newIndices, int nbrVertices, int nbrIndices);
    ~Shape();
    void render();
    void setPosition(glm::vec3 pos);
    void setRotation(float angle);
    void setScale(glm::vec2 scale);
    const std::string getName();
    float *vertices;
    unsigned int *indices;


    std::string shapeName;
    int verticesSize;
    glm::vec3 position;
    private:
    unsigned int VAO, VBO, EBO;

};

#endif // SHAPE_HPP
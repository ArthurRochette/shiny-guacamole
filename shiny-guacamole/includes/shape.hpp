#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/gtc/matrix_transform.hpp"

#include "color.hpp"
#include "displayable.hpp"

#include <iostream>


class Shape : public Displayable
{
    public:
    Shape(float *newVertices, unsigned int *newIndices, unsigned int nbrVertices, unsigned int nbrIndices);
    ~Shape();
    void render();
    void setPosition(glm::vec3 pos);
    void setRotation(float angle);
    void setScale(glm::vec2 scale);
    Color getColor() const ;
    void setColor(Color& color);
    const std::string getName() const ;

    protected:
    Color color;
    float *vertices;
    unsigned int *indices;
    std::string shapeName;
    unsigned int verticesNumber;
    unsigned int indicesNumber;
    glm::vec3 position;
    private:
    unsigned int VAO, VBO, EBO;

};

#endif // SHAPE_HPP
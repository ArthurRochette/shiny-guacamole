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
    Shape();
    ~Shape();
    void render();
    void move(glm::vec3 pos);
    void move(float x, float y, float z);
    void setPosition(glm::vec3 pos);
    void setPosition(float x, float y, float z);
    void setRotation(float angle);
    void setScale(glm::vec2 scale);

    Color getColor() const ;
    void setColor(Color color);
    const std::string getShapeName() const ;

    protected:
    Color color;
    float *vertices;
    unsigned int *indices;
    std::string shapeName;
    unsigned int verticesNumber;
    unsigned int indicesNumber;
    glm::vec3 position; // centre de l'objet
    private:
    unsigned int VAO, VBO, EBO;

};

#endif // SHAPE_HPP
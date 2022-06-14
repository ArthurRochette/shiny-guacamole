#include "shape.hpp"

Shape::Shape(float *newVertices, unsigned int *newIndices, int nbrVertices, int nbrIndices)
{
    position = glm::vec3(0, 0, 0);
    vertices = newVertices;
    verticesSize = nbrVertices;
    indices = newIndices;

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

}

Shape::~Shape()
{
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteBuffers(1, &EBO);
}

void Shape::render()
{

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, 48, vertices, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, 24, indices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);
    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

void Shape::setPosition(glm::vec3 pos)
{
    for (int i = 0; i < verticesSize; i += 3)
    {
        vertices[i] += pos.x;
        vertices[i + 1] += pos.y;
        vertices[i + 2] += pos.z;
    }
}

void Shape::setScale(glm::vec2 scale)
{
    for (int i = 0; i < verticesSize; i += 3)
    {
        vertices[i] *= scale.x;
        vertices[i + 1] *= scale.y;
    }
}

const std::string Shape::getName()
{
    return shapeName;
}

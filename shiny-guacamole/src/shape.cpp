#include "shape.hpp"

Shape::Shape(float posX, float posY, float posZ)
{
    position = glm::vec3(posX, posY, posZ);
    vertices = nullptr;
}

Shape::Shape(glm::vec3 newPosition)
{
    position = newPosition;
    vertices = nullptr;
}

void Shape::render()
{
    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}
#include "shape.hpp"

Shape::Shape(float *newVertices, unsigned int *newIndices, int nbrVertices, int nbrIndices)
{
    position = glm::vec3(0, 0, 0);
    vertices = newVertices;
    verticesSize = nbrVertices;
    indices = newIndices;
    shapeName = "undefined";
    color = glm::vec4(1, 0, 0, 1);

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
    float* verticesColors = new float[verticesSize * 2];
    //incorporate color into vertices , x y z r g b
    for (int i = 0; i < verticesSize; i++)
    {
        verticesColors[i * 2] = vertices[i * 3];
        verticesColors[i * 2 + 1] = vertices[i * 3 + 1];
        verticesColors[i * 2 + 2] = vertices[i * 3 + 2];
        verticesColors[i * 2 + 3] = color.r;
        verticesColors[i * 2 + 4] = color.g;
        verticesColors[i * 2 + 5] = color.b;
    }
    

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(verticesColors), verticesColors, GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, 24, indices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    
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

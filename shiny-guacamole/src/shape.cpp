#include "shape.hpp"

Shape::Shape(float *newVertices, unsigned int *newIndices, unsigned int nbrVertices, unsigned int nbrIndices)
{
    position = glm::vec3(0, 0, 0);
    vertices = newVertices;

    verticesNumber = nbrVertices;
    indices = newIndices;
    indicesNumber = nbrIndices;
    color = Color();

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);
}

Shape::Shape()
{
    position = glm::vec3(0, 0, 0);
    vertices = NULL;
    verticesNumber = 0;
    indices = NULL;
    indicesNumber = 0;
    color = Color();
    
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
    float *verticesColors = new float[verticesNumber * 2 + verticesNumber / 3];
    // incorporate color into vertices, x y z r g b
    int j = 0;
    for (int i = 0, j = 0; i < verticesNumber; i+=3, j += 7)
    {
        verticesColors[j] = vertices[i];
        verticesColors[j+1] = vertices[i + 1];
        verticesColors[j+2] = vertices[i + 2];
        verticesColors[j+3] = color.r;
        verticesColors[j+4] = color.g;
        verticesColors[j+5] = color.b;
        verticesColors[j+6] = color.a;

    }


    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, (verticesNumber * 2 + verticesNumber / 3) * 4, verticesColors, GL_STATIC_DRAW); 

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indicesNumber * 4, indices, GL_STATIC_DRAW); // *4 for bytes

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);
    // color attribute
    glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, verticesNumber, GL_UNSIGNED_INT, 0);
    delete verticesColors;
}

void Shape::move(float x, float y, float z)
{
    position.x += x;
    position.y += y;
    position.z += z;

    for (int i = 0; i < verticesNumber; i += 3)
    {
        vertices[i] += x;
        vertices[i + 1] += y;
        vertices[i + 2] += z;
    }
}

void Shape::move(glm::vec3 pos)
{
    position += pos;

    for (int i = 0; i < verticesNumber; i += 3)
    {
        vertices[i] += pos.x;
        vertices[i + 1] += pos.y;
        vertices[i + 2] += pos.z;
    }
}

void Shape::setScale(glm::vec2 scale)
{
    for (int i = 0; i < verticesNumber; i += 3)
    {
        vertices[i] *= scale.x;
        vertices[i + 1] *= scale.y;
    }
}

Color Shape::getColor() const
{
    return color;
}

void Shape::setColor(Color color)
{
    this->color = color;
}

void Shape::setPosition(glm::vec3 pos)
{
    glm::vec3 vecteurMov =  pos - position;

    for (int i = 0; i < verticesNumber; i += 3)
    {
        vertices[i] += vecteurMov.x;
        vertices[i + 1] += vecteurMov.y;
        vertices[i + 2] += vecteurMov.z;
    }
    position = pos;
}

void Shape::setPosition(float x, float y, float z)
{
    glm::vec3 vecteurMov =  glm::vec3(x, y, z) - position;

    for (int i = 0; i < verticesNumber; i += 3)
    {
        vertices[i] += vecteurMov.x;
        vertices[i + 1] += vecteurMov.y;
        vertices[i + 2] += vecteurMov.z;
    }
    position = glm::vec3(x, y, z);
}


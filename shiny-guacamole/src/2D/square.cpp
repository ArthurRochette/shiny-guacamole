#include "2D/square.hpp"

Square::Square(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 12, 6)
{
    vertices = new float[12]{
        -0.5f - size.x / 2, -0.5f - size.y / 2, 0.0f,
        0.5f + size.x / 2, -0.5f - size.y / 2, 0.0f,
        0.5f + size.x / 2, 0.5f + size.y / 2, 0.0f,
        -0.5f - size.x / 2, 0.5f + size.y / 2, 0.0f};

    indices = new unsigned int[6]{
        0, 1, 2,
        2, 3, 0};
    displayableName = "Square";
    setPosition(pos);
}

Square::Square(float x, float y, float z) : Shape(vertices, indices, 12, 6)
{
    vertices = new float[12]{
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.5f, 0.5f, 0.0f,
        -0.5f, 0.5f, 0.0f};

    indices = new unsigned int[6]{
        0, 1, 2,
        2, 3, 0};
    displayableName = "Square";
    setPosition(x, y, z);
}

Square::Square(float x, float y, float z, float width, float height) : Shape(vertices, indices, 12, 6)
{
     vertices = new float[12]{
        -0.5f - width / 2, -0.5f - height / 2, 0.0f,
        0.5f + width / 2, -0.5f - height / 2, 0.0f,
        0.5f + width / 2, 0.5f + height / 2, 0.0f,
        -0.5f - width / 2, 0.5f + height / 2, 0.0f};

    indices = new unsigned int[6]{
        0, 1, 2,
        2, 3, 0};

    displayableName = "Square";
    setPosition(glm::vec3(x,y,z));
}
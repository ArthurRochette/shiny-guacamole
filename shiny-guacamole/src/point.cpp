#include "point.hpp"

Point::Point(float x, float y, float z)
{
    shapeName = "Point";
    position = glm::vec3(x, y, z);
    color = Color(0.0f, 0.0f, 0.0f, 0.0f);

    glEnable(GL_PROGRAM_POINT_SIZE);
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
}

Point::~Point()
{
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
}

void Point::render()
{
    float *points = new float[3];
    points[0] = position.x;
    points[1] = position.y;
    points[2] = position.z;

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, 3 * sizeof(float), points, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);

    glDrawArrays(GL_POINTS, 0, 3);
}

void Point::setPosition(glm::vec3 pos)
{
    position = pos;
}

void Point::setColor(Color& color)
{
    this->color = color;
}

Color Point::getColor() const
{
    return color;
}

const std::string Point::getName() const
{
    return shapeName;
}

#include "2D/point.hpp"

Point::Point(float x, float y, float z)
{
    shapeName = "Point";
    position = glm::vec3(x, y, z);
    color = Color(1, 0, 0);

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
    float *points = new float[6];
    points[0] = position.x;
    points[1] = position.y;
    points[2] = position.z;
    points[3] = color.r;
    points[4] = color.g;
    points[5] = color.b;



    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), points, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);
    //color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(VAO);
    glDrawArrays(GL_POINTS, 0, 1);

}

void Point::setPosition(glm::vec3 pos)
{
    position = pos;
}

void Point::setPosition(float x, float y, float z)
{
    position = glm::vec3(x, y, z);
}

void Point::setColor(Color color)
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

#include "2D/point.hpp"

/**
 * @brief Construct a new Point:: Point object
 * @param x The x coordinate of the point's center
 * @param y The y coordinate of the point's center
 * @param z The z coordinate of the point's center
 */
Point::Point(float x, float y, float z)
{
    shapeName = "Point";
    position = glm::vec3(x, y, z);
    color = Color(1, 0, 0);

    glEnable(GL_PROGRAM_POINT_SIZE);
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
}

/**
 * @brief Construct a new Point:: Point object
 * @param pos The position of the center of the point
 */
Point::Point(glm::vec3 pos)
{
    shapeName = "Point";
    position = pos;
    color = Color(1, 0, 0);

    glEnable(GL_PROGRAM_POINT_SIZE);
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
}

/**
 * @brief Destroy the Point object
 */
Point::~Point()
{
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
}
/**
 * @brief Render the point
 */
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
    // color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(VAO);
    glDrawArrays(GL_POINTS, 0, 1);
}
/**
 * @brief Set the position of the point
 * @param pos The position of the new coordinate 
 */
void Point::setPosition(glm::vec3 pos)
{
    position = pos;
}
/**
 * @brief Set the position of the point
 * @param x The x coordinate of the new coordinate
 * @param y The y coordinate of the new coordinate
 * @param z The z coordinate of the new coordinate
 */
void Point::setPosition(float x, float y, float z)
{
    position = glm::vec3(x, y, z);
}
/**
 * @brief Set the color of the point
 * @param color The new color
 */
void Point::setColor(Color color)
{
    this->color = color;
}
/**
 * @brief Return the color of the point
 */
Color Point::getColor() const
{
    return color;
}
/**
 * @brief Return the shape name of the object (point)
 */
const std::string Point::getName() const
{
    return shapeName;
}

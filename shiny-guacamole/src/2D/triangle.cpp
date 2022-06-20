#include "2D/triangle.hpp"


Triangle::Triangle(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 9, 3)
{
   shapeName = "Triangle";
   position = pos;
   setPosition(pos);
}

Triangle::Triangle(float x, float y, float z) : Shape(vertices, indices, 9, 3)
{
   shapeName = "Triangle";
   position = glm::vec3(x, y, z);
   setPosition(position);
}
#include "2D/triangle.hpp"


Triangle::Triangle(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 9, 3)
{
   
   shapeName = "Triangle";
   setPosition(pos);
}

Triangle::Triangle(float x, float y, float z) : Shape(vertices, indices, 9, 3)
{
   shapeName = "Triangle";
   setPosition(x,y,z);
}
#include "2D/square.hpp"

Square::Square(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 12, 6)
{
   shapeName = "Square";
   position = pos;
   setPosition(pos);
}

Square::Square(float x, float y, float z) : Shape(vertices, indices, 12, 6)
{
   shapeName = "Square";
   position = glm::vec3(x, y, z);
   setPosition(position);
}
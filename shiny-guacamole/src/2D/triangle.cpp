#include "2D/triangle.hpp"


Triangle::Triangle(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 9, 3)
{
   vertices = new float[9]{
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f, 0.5f, 0.0f
   };

   indices = new unsigned int[3]{
        0, 1, 2
   };
   displayableName = "Triangle";
   setPosition(pos);
}

Triangle::Triangle(float x, float y, float z) : Shape(vertices, indices, 9, 3)
{
   displayableName = "Triangle";
   setPosition(x,y,z);
}
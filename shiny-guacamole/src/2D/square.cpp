#include "2D/square.hpp"

Square::Square(glm::vec3 pos, glm::vec2 size) : Shape(vertices, indices, 12, 6)
{
   vertices = new float[12]{
       -0.5f, -0.5f, 0.0f,
       0.5f, -0.5f, 0.0f,
       0.5f, 0.5f, 0.0f,
       -0.5f, 0.5f, 0.0f};

   indices = new unsigned int[6]{
       0, 1, 2,
       2, 3, 0};
   shapeName = "Square";
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
   shapeName = "Square";
   setPosition(x,y,z);
}
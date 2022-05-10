#include "square.hpp"

SG::Square::Square() : Shape() {}

SG::Square::Square(vec3f size, vec3f pos) : Shape(size, pos) {}

SG::Square::Square(float xSize, float ySize, float zSize, float xPos, float yPos, float zPos) : Shape(xSize, ySize, zSize, xPos, yPos, zPos) {}

SG::Square::~Square() {}

void SG::Square::render()
{
    glBegin(GL_POLYGON);
    glColor3f(color.r, color.g, color.b);
    glVertex3f(pos.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y + size.y, pos.z);
    glVertex3f(pos.x, pos.y + size.y, pos.z);
    glEnd();
    glFlush();
}
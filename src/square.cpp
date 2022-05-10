#include "square.hpp"

SG::Square::Square() : Shape() {}

SG::Square::Square(vec3f new_size, vec3f new_pos) : Shape(new_size, new_pos) {
}

SG::Square::Square(float xSize, float ySize, float zSize, float xPos, float yPos, float zPos) : Shape(xSize, ySize, zSize, xPos, yPos, zPos) {}

SG::Square::~Square() {}

void SG::Square::render()
{
    pos.z += 0.001;//FIXME profondeur ne marche pas
    std::cout << pos.z << std::endl;
    
    glBegin(GL_QUADS);

    glColor3f(color.r, color.g, color.b);
    glVertex3f(pos.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y + size.y, pos.z);
    glVertex3f(pos.x, pos.y + size.y, pos.z);
    glEnd();
    
}
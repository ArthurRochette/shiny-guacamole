#include "square.hpp"

SG::Square::Square() : Shape() {}

SG::Square::Square(Vec3f new_size, Vec3f new_pos) : Shape(new_size, new_pos)
{
    //TODO change 
    vertexs = new GLfloat[24 * 3]{
        -size.x + pos.x, -size.y + pos.y, -size.z + pos.z, -size.x + pos.x, -size.y  + pos.y,  size.z + pos.z, -size.x + pos.x,  size.y + pos.y,  size.z + pos.z, -size.x + pos.x,  size.y + pos.y , -size.z + pos.z,
         size.x + pos.x, -size.y + pos.y, -size.z + pos.z,  size.x + pos.x, -size.y  + pos.y,  size.z + pos.z,  size.x + pos.x,  size.y + pos.y,  size.z + pos.z,  size.x + pos.x,  size.y + pos.y , -size.z + pos.z,
        -size.x + pos.x, -size.y + pos.y, -size.z + pos.z, -size.x + pos.x, -size.y  + pos.y,  size.z + pos.z,  size.x + pos.x, -size.y + pos.y,  size.z + pos.z,  size.x + pos.x, -size.y + pos.y , -size.z + pos.z,
        -size.x + pos.x,  size.y + pos.y, -size.z + pos.z, -size.x + pos.x,  size.y  + pos.y,  size.z + pos.z,  size.x + pos.x,  size.y + pos.y,  size.z + pos.z,  size.x + pos.x,  size.y + pos.y , -size.z + pos.z,
        -size.x + pos.x, -size.y + pos.y, -size.z + pos.z, -size.x + pos.x,  size.y  + pos.y, -size.z + pos.z,  size.x + pos.x,  size.y + pos.y, -size.z + pos.z,  size.x + pos.x, -size.y + pos.y , -size.z + pos.z,
        -size.x + pos.x, -size.y + pos.y,  size.z + pos.z, -size.x + pos.x,  size.y  + pos.y,  size.z + pos.z,  size.x + pos.x,  size.y + pos.y,  size.z + pos.z,  size.x + pos.x, -size.y + pos.y ,  size.z + pos.z};

    colors = new GLfloat[12 * 6]{
        0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0,
        1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
        0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0,
        0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1
    };
}

SG::Square::Square(float xSize, float ySize, float zSize, float xPosition, float yPosition, float zPosition) : Shape(xSize, ySize, zSize, xPosition, yPosition, zPosition)
{

    vertexs = new GLfloat[24 * 3]{
        -size.x, -size.y, -size.z, -size.x, -size.y, size.z, -size.x, size.y, size.z, -size.x, size.y, -size.z,
         size.x, -size.y, -size.z,  size.x, -size.y, size.z, size.x, size.y, size.z, size.x, size.y, -size.z,
        -size.x, -size.y, -size.z, -size.x, -size.y, size.z, size.x, -size.y, size.z, size.x, -size.y, -size.z,
        -size.x,  size.y, -size.z, -size.x,  size.y,  size.z, size.x, size.y, size.z, size.x, size.y, -size.z,
        -size.x, -size.y, -size.z, -size.x,  size.y, -size.z, size.x, size.y, -size.z, size.x, -size.y, -size.z,
        -size.x, -size.y,  size.z, -size.x,  size.y,  size.z, size.x, size.y, size.z, size.x, -size.y, size.z};

    colors = new GLfloat[12 * 6]{
        0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0,
        1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
        0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0,
        0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0,
        0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1};
}

SG::Square::~Square() {}

void SG::Square::render()
{

    static float alpha = 0;
    // attempt to rotate cube

    /* We have a color array and a vertex array */
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertexs);
    glColorPointer(3, GL_FLOAT, 0, colors);

    /* Send data : 24 vertices */
    glDrawArrays(GL_QUADS, 0, 24);

    /* Cleanup states */
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    alpha += 1;
    /*
    pos.z += 0.001;
    std::cout << pos.z << std::endl;

    glBegin(GL_QUADS);

    glColor3f(color.r, color.g, color.b);
    glVertex3f(pos.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y + size.y, pos.z);
    glVertex3f(pos.x, pos.y + size.y, pos.z);
    glEnd();*/
}

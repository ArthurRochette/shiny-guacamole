#include "square.hpp"

SG::Square::Square() : Shape() {}

SG::Square::Square(vec3f new_size, vec3f new_pos) : Shape(new_size, new_pos)
{
}

SG::Square::Square(float xSize, float ySize, float zSize, float xPos, float yPos, float zPos) : Shape(xSize, ySize, zSize, xPos, yPos, zPos) {}

SG::Square::~Square() {}

GLfloat *SG::Square::deplacer(GLfloat *vertices)
{
    for (int i = 0; i < 72; i+=3)
    {
        vertices[i] += pos.x;
        vertices[i+1] += pos.y;
        vertices[i+2] += pos.z;

        std::cout << vertices[i+0] << std::endl;
        std::cout << vertices[i+1] << std::endl;
        std::cout << vertices[i+2] << std::endl;
    }
    return vertices;
}

void SG::Square::render()
{
    GLfloat vertices[] =
        {
            -0.1, -0.1, -0.1, -0.1, -0.1, 0.1, -0.1, 0.1, 0.1, -0.1, 0.1, -0.1,
            0.1, -0.1, -0.1, 0.1, -0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, -0.1,
            -0.1, -0.1, -0.1, -0.1, -0.1, 0.1, 0.1, -0.1, 0.1, 0.1, -0.1, -0.1,
            -0.1, 0.1, -0.1, -0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, -0.1,
            -0.1, -0.1, -0.1, -0.1, 0.1, -0.1, 0.1, 0.1, -0.1, 0.1, -0.1, -0.1,
            -0.1, -0.1, 0.1, -0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, -0.1, 0.1
        };
    
    GLfloat *ptr;
    ptr = deplacer(vertices);

    GLfloat colors[] =
        {
            0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0,
            1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0,
            0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0,
            0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0,
            0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0,
            0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1};

    static float alpha = 0;
    // attempt to rotate cube

    /* We have a color array and a vertex array */
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, vertices);
    glColorPointer(3, GL_FLOAT, 0, colors);

    /* Send data : 24 vertices */
    glDrawArrays(GL_QUADS, 0, 24);

    /* Cleanup states */
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    alpha += 1;
    /*
    pos.z += 0.001;//FIXME profondeur ne marche pas
    std::cout << pos.z << std::endl;

    glBegin(GL_QUADS);

    glColor3f(color.r, color.g, color.b);
    glVertex3f(pos.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y, pos.z);
    glVertex3f(pos.x + size.x, pos.y + size.y, pos.z);
    glVertex3f(pos.x, pos.y + size.y, pos.z);
    glEnd();*/
}

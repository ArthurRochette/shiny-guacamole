#ifndef VECTORS_HPP
#define VECTORS_HPP

#include "shape.hpp"

namespace SG
{
    class Square : public Shape
    {
    public:
        Square();
        Square(Vec3f size, Vec3f pos);
        Square(float xSize, float ySize, float zSize, float xPosition, float yPosition, float zPosition);
        ~Square();
    

        void render();
    private:
        GLfloat* deplacer(GLfloat *vertices);

    };

}

#endif // VECTORS_HPP
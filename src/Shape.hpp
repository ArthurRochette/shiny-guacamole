#ifndef DSHAPES_HPP
#define DSHAPES_HPP

#include "vectors3.hpp"
#include "color.hpp"

namespace SG
{
    class Shape
    {
    public:
        Shape();
        Shape(vec3f size, vec3f pos);
        Shape(float xSize, float ySize,float zSize, float xPos, float yPos, float zPos);
        ~Shape();

        virtual void render() = 0;
        virtual void setSize(vec3f size);
        virtual void setPos(vec3f pos);
        virtual void setSize(float xSize, float ySize, float zSize);
        virtual void setPos(float xPos, float yPos, float zPos);
        virtual vec3f getSize();
        virtual vec3f getPos();
        virtual void setColor(Color color);
        virtual Color getColor();
        virtual unsigned int getID();
        static unsigned int counter;


    private:
        unsigned int id ;
        vec3f size;
        vec3f pos;
        Color color;
    };

};


#endif // DSHAPES_HPP
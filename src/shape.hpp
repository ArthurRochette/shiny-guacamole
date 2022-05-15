#ifndef DSHAPES_HPP
#define DSHAPES_HPP
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <magicArray.hpp>

#include "vectors3.hpp"
#include "color.hpp"

namespace SG
{
    class Shape
    {
    public:
        Shape();
        Shape(vec3f &new_size, vec3f &new_pos);
        Shape(float xSize, float ySize,float zSize, float xPos, float yPos, float zPos);
        ~Shape();

        virtual void render() = 0;
        virtual void setSize(vec3f size);
        virtual void setPos(vec3f pos);
        virtual void setSize(float xSize, float ySize, float zSize);
        virtual void setPos(float xPos, float yPos, float zPos);
        virtual void setColors(MagicArray<GLfloat> &colors);
        virtual void setVertexs(MagicArray<GLfloat> &vertexs);
        virtual vec3f getSize();
        virtual vec3f getPos();
        virtual void setColor(Color color);
        virtual Color getColor();
        virtual unsigned int getID();
        virtual void move(vec3f pos);
        virtual void rotate(vec3f axis, float angle);
        
        static unsigned int counter;



        //TODO faire function de mouvement + rotatione


    protected:
        unsigned int id ;
        vec3f size;
        vec3f pos;
        Color color;
        MagicArray<GLfloat> vertexs;
        MagicArray<GLfloat> colors;
    };

};


#endif // DSHAPES_HPP
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
        Shape(Vec3f &new_size, Vec3f &new_pos);
        Shape(float xSize, float ySize,float zSize, float xPosition, float yPosition, float zPosition);
        ~Shape();

        virtual void render() = 0;
        virtual void setSize(Vec3f size);
        virtual void setPosition(Vec3f pos);
        virtual void setSize(float xSize, float ySize, float zSize);
        virtual void setPosition(float xPosition, float yPosition, float zPosition);
        virtual void setColors(MagicArray<GLfloat> &colors);
        virtual void setVertexs(MagicArray<GLfloat> &vertexs);
        virtual Vec3f getSize();
        virtual Vec3f getPosition();
        virtual void setColor(Color color);
        virtual Color getColor();
        virtual unsigned int getID();
        
        virtual void move(vec3f pos);
        virtual void rotate(vec3f axis, float angle);
        
        static unsigned int counter;



        //TODO faire function de mouvement + rotatione


    protected:
        unsigned int id;
        vec3f size;
        vec3f pos;
        Color color;
        MagicArray<GLfloat> *vertexs;
        MagicArray<GLfloat> *colors;
    };

};


#endif // DSHAPES_HPP
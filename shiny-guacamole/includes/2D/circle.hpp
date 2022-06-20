#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"
#include "color.hpp"



class Circle : public Shape 
{
    public:
    Circle(float x, float y, float z, float newRadius, unsigned int segments);
    float getRadius() const;
    unsigned int getSegments() const;

    private:
    float radius;
    unsigned int segments;

};

#endif // CIRCLE_HPP
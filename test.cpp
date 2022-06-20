#include <iostream>

#include "environment.hpp"
#include "2D/circle.hpp"
#include "2D/square.hpp"
#include "shape.hpp"
#include "2D/point.hpp"

int main(int, char **)
{
    Environment env(800, 800, "Test");

    Circle c(0, 0, 0, 0.75, 100);
    c.setColor(Color(1, 0, 0, 0.2));
    c.setPosition(1,0,0);
    c.setPosition(1,0,0);


    Square s(0, 0, 0);
    s.setPosition(-1,0,0);
    s.setColor(Color(0, 1, 0, 1));
    Point p(0,0,0);
    p.setPosition(0,0,0);
    p.setColor(Color(0,0,1,1));
    env.add(p);
    env.add(s);
    env.add(c);

    env.render();
}


void Environment::computeLogic()
{

    //std::cout << "logic" << std::endl;
}
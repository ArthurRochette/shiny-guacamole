#include <iostream>

#include "environment.hpp"
#include "square.hpp"
#include "point.hpp"

int main(int, char **)
{
    Environment env(800, 600, "simulation");
    Point p(0,0,0);
    env.add(p);
    env.render();
}

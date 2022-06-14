#include <iostream>

#include "environment.hpp"
#include "square.hpp"

int main(int, char **)
{
    Environment env(800, 600, "simulation");
    Square square(glm::vec3(0,0,0), glm::vec2(1,1));
    env.addShape(square);
    env.render();
}

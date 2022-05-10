#include <iostream>
#include "src/environment.hpp"
#include "src/square.hpp"

using namespace SG;

int main(int, char **)
{
    //TODO try to display square in window
    
    Environment env;
    env.addWindow(500, 500, 100, 100, "Hello World");
    env.getWindow(0)->addShape(new Square(vec3f(200, 200, 0), vec3f(250, 250, 0)));
    env.start();
}

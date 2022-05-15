#include <iostream>
#include "src/environment.hpp"
#include "src/square.hpp"

using namespace SG;




int main(int, char **)
{
    
    Environment env;
    env.addWindow(1000, 1000, 100, 100, "Hello World");
    Square *square = new Square(vec3f(0.1, 0.1, 0), vec3f(0, 0, 0.9));
    env.getWindow(0)->addShape(square);
    env.start();

}

void SG::Environment::compute(){
    getWindow(0)->getShape(0)->move(vec3f(0.1, 0.1, 0));
    return;
}


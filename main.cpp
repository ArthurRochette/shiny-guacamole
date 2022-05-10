#include <iostream>
#include "src/environment.hpp"
#include "src/color.hpp"

using namespace SG;

int main(int, char **)
{
    //TODO change color max 255 to 1
    Color color = Color::random();
    std::cout << color.r << " " << color.g << " " << color.b << " " << color.a << std::endl;
    //TODO try to display square in window
    /*
    Environment env;
    env.addWindow(500, 500, 100, 100, "Hello World");
    env.addShape(new Square(vec2i(200, 200), vec2i(250, 250), Color::RED));
    env.start();*/
}

#include <iostream>

#include "environment.hpp"
#include "2D/circle.hpp"
#include "2D/square.hpp"
#include "shape.hpp"
#include "2D/point.hpp"
#include "UI/interface.hpp"
#include "UI/button.hpp"
#include "2D/circle.hpp"

int main(int, char **)
{
    Environment env(500, 500, "Test");
    Interface interface(-3,0,1,5);
    Square sq(0,0,0,1,2);

    env.addUI(interface);//FIXME
    env.addShape(sq);
    env.render();
}

void Environment::computeLogic()
{
    //TODO thread
    // std::cout << "logic" << std::endl;
}
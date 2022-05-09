#include <iostream>
#include "src/environment.hpp"

using namespace SG;

int main(int, char**) {
    Environment env;
    env.addWindow(800, 600, "Hello World");
    env.start();
}

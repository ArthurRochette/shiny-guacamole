#include <iostream>
#include "src/environment.hpp"
#include "src/color.hpp"

using namespace SG;

int main(int, char**) {

    std::cout << Color::toHex(255, 0, 167) << std::endl;
}

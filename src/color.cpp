#include "color.hpp"
#include <sstream>
#include <iomanip>

SG::Color::Color()
{
    r = 0;
    g = 0;
    b = 0;
    a = 0;
}

SG::Color::Color(float r, float g, float b)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = 0;
}

SG::Color::Color(float r, float g, float b, float a)
{
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

SG::Color::Color(std::string hex)
{
    std::stringstream ss;
    ss << std::hex << hex;
    ss >> r;
    ss >> g;
    ss >> b;
    ss >> a;

    r = r / 255;
    g = g / 255;
    b = b / 255;
    a = a / 255;
}

void SG::Color::operator=(const SG::Color &newColor)
{
    r = newColor.r;
    g = newColor.g;
    b = newColor.b;
    a = newColor.a;
}
std::string SG::Color::toHex(float r, float g, float b)
{
    std::stringstream ss;
    ss << std::hex << std::uppercase;
    ss << std::setfill('0');
    ss << std::setw(2);
    ss << (int)r;
    ss << std::setw(2);
    ss << (int)g;
    ss << std::setw(2);
    ss << (int)b;
    return "0x" + ss.str();

}
std::string SG::Color::toHex(float r, float g, float b, float a)
{
    std::stringstream ss;
    ss << std::hex << std::uppercase;
    ss << std::setfill('0');
    ss << std::setw(2);
    ss << (int)r;
    ss << std::setw(2);
    ss << (int)g;
    ss << std::setw(2);
    ss << (int)b;
    ss << std::setw(2);
    ss << (int)a;
    return "0x" + ss.str();
}
std::string SG::Color::toHex(Color color)
{
    std::stringstream ss;
    ss << std::hex << std::uppercase;
    ss << std::setfill('0');
    ss << std::setw(2);
    ss << (int)color.r;
    ss << std::setw(2);
    ss << (int)color.g;
    ss << std::setw(2);
    ss << (int)color.b;
    ss << std::setw(2);
    ss << (int)color.a;
    return "0x" + ss.str();
}

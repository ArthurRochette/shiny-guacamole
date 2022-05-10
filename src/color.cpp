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
    if (hex.size() > 10 || hex.size() < 8)
    {
        throw "Invalid hex string";
    }
    if (hex.size() == 10)
    {
        hex = hex.substr(2);// if start with 0x
    }
    else if (hex.size() == 9)
    {
        hex = hex.substr(1);// if start with # or x
    }
    r = (float)std::stoi(hex.substr(0, 2), nullptr, 16) / 255;
    g = (float)std::stoi(hex.substr(2, 2), nullptr, 16) / 255;
    b = (float)std::stoi(hex.substr(4, 2), nullptr, 16) / 255;
    if (hex.length() == 8)
    {
        a = (float)std::stoi(hex.substr(6, 2), nullptr, 16) / 255; // take alpha if exists
    }
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


SG::Color SG::Color::random()
{
    return Color(rand() / (float)RAND_MAX, rand() / (float)RAND_MAX, rand() / (float)RAND_MAX);
}

SG::Color SG::Color::white = SG::Color(1, 1, 1);
SG::Color SG::Color::black = SG::Color(0, 0, 0);
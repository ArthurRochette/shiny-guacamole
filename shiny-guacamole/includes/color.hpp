#ifndef COLOR_HPP
#define COLOR_HPP

#include <ostream>

struct Color
{
    Color(): r(1), g(0.2), b(1) , a(1) {} 
    Color(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {}
    Color(float r, float g, float b) : r(r), g(g), b(b), a(1) {}
    float r;
    float g;
    float b;
    float a;

    // << operator overload
    friend std::ostream &operator<<(std::ostream &os, const Color &c)
    {
        os << "Color: " << c.r << " " << c.g << " " << c.b << " " << c.a;
        return os;
    }

    static Color from255(int r, int g, int b, int a)
    {
        return Color(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f);
    }
    
    static Color fromHex(std::string hex)
    {
        float r = std::stoi(hex.substr(0, 2), nullptr, 16)/255.0f;
        float g = std::stoi(hex.substr(2, 2), nullptr, 16)/255.0f;
        float b = std::stoi(hex.substr(4, 2), nullptr, 16)/255.0f;
        float a = 1;
        if(hex.size() == 8) a = std::stoi(hex.substr(6, 2), nullptr, 16)/255.0f;
        
        return Color::from255(r, g, b, a);

    }
};


#endif // COLOR_HPP
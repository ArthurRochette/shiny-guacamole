#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>
namespace SG
{
    struct Color
    {
        Color();
        Color(float r, float g, float b);
        Color(float r, float g, float b, float a);
        Color(std::string hex);//FIXME 
        static std::string toHex(float r, float g, float b);
        static std::string toHex(float r, float g, float b, float a);
        static std::string toHex(Color color);
        static Color random();
        float r;
        float g;
        float b;
        float a;

        void operator=(const Color &a);

        static Color white;
        static Color black;
        static Color red;
        static Color green;
        static Color blue;
        static Color yellow;
        static Color cyan;
    };


}

#endif // COLOR_HPP
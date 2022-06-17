#ifndef COLOR_HPP
#define COLOR_HPP


struct Color
{
    Color(): r(1), g(0.3), b(0.4), a(1) {} // supposed to be pink
    Color(int r, int g, int b, int a) : r(r), g(g), b(b), a(a) {}
    
    float r;
    float g;
    float b;
    float a;
};


#endif // COLOR_HPP
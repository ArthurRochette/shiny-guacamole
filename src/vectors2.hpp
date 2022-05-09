#ifndef VECTORS2_HPP
#define VECTORS2_HPP


namespace SG
{
    struct vec2f
    {
        vec2f() : x(0), y(0) {};
        vec2f(float x, float y) : x(x), y(y) {};
        float x;
        float y;
    };

    struct vec2i
    {
        vec2i() : x(0), y(0) {};
        vec2i(int x, int y): x(x), y(y) {};
        int x;
        int y;
    };


}

#endif // VECTORS2_HPP
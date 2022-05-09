#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace SG
{
    struct Vector2i
    {
        Vector2i(int x, int y) : x(x), y(y) {}
        Vector2i();
        int x;
        int y;
        friend Vector2i operator+(const Vector2i &a, const Vector2i &b);
    };

    struct Vector2f
    {
        Vector2f(float x, float y) : x(x), y(y) {}
        Vector2f();
        float x;
        float y;
        friend Vector2f operator+(const Vector2f &a, const Vector2f &b);
    };

}

#endif // VECTOR_HPP
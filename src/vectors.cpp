#include "vectors.hpp"

Vector2i& operator+(const Vector2i &a, const Vector2i &b){
    Vector2i c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}
#ifndef VECTOR_HPP
#define VECTOR_HPP

struct Vector2i{
    int x;
    int y;
};
struct Vector2f{
    float x;
    float y;
};

Vector2i& operator+(const Vector2i &a, const Vector2i &b);


#endif //VECTOR_HPP
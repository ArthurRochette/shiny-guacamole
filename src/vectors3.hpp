#ifndef VECTORS3_HPP
#define VECTORS3_HPP

#include <iostream>

namespace SG
{
    struct vec3f
    {
        vec3f() : x(0), y(0) {};
        vec3f(float x, float y, float z) : x(x), y(y), z(z) {};
        vec3f(vec3f const &v) : x(v.x), y(v.y), z(v.z) {};
        float x;
        float y;
        float z;
        void rotate(vec3f axis, float angle){
            return;

        }
        
        void operator=(const vec3f &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
        friend std::ostream &operator<<(std::ostream &os, const vec3f &a)
        {
            os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
            return os;
        }
        friend vec3f operator+(const vec3f &a, const vec3f &b)
        {
            return vec3f(a.x + b.x, a.y + b.y, a.z + b.z);
        }
        friend void operator+=(vec3f &a, const vec3f &b)
        {
            a.x += b.x;
            a.y += b.y;
            a.z += b.z;
        }
    };

    struct vec3i
    {
        vec3i() : x(0), y(0), z(0) {};
        vec3i(int x, int y, int z): x(x), y(y), z(z){};
        vec3i(vec3i const &v) : x(v.x), y(v.y), z(v.z) {};

        int x;
        int y;
        float z;
        void operator=(vec3i &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
        friend std::ostream &operator<<(std::ostream &os, const vec3i &a)
        {
            os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
            return os;
        }
        friend vec3i operator+(const vec3i &a, const vec3i &b)
        {
            return vec3i(a.x + b.x, a.y + b.y, a.z + b.z);
        }
        friend void operator+=(vec3i &a, const vec3i &b)
        {
            a.x += b.x;
            a.y += b.y;
            a.z += b.z;
        }
    };


}

#endif // VECTORS3_HPP
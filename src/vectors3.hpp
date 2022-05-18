#ifndef VECTORS3_HPP
#define VECTORS3_HPP

#include <iostream>

namespace SG
{
    struct Vec3f
    {
        Vec3f() : x(0), y(0) {};
        Vec3f(float x, float y, float z) : x(x), y(y), z(z) {};
        Vec3f(Vec3f const &v) : x(v.x), y(v.y), z(v.z) {};
        float x;
        float y;
        float z;
        void rotate(Vec3f axis, float angle){
            return;

        }
        
        void operator=(const Vec3f &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
        friend std::ostream &operator<<(std::ostream &os, const Vec3f &a)
        {
            os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
            return os;
        }
        friend Vec3f operator+(const Vec3f &a, const Vec3f &b)
        {
            return Vec3f(a.x + b.x, a.y + b.y, a.z + b.z);
        }
        friend void operator+=(Vec3f &a, const Vec3f &b)
        {
            a.x += b.x;
            a.y += b.y;
            a.z += b.z;
        }
    };

    struct Vec3i
    {
        Vec3i() : x(0), y(0), z(0) {};
        Vec3i(int x, int y, int z): x(x), y(y), z(z){};
        Vec3i(Vec3i const &v) : x(v.x), y(v.y), z(v.z) {};

        int x;
        int y;
        float z;
        void operator=(Vec3i &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
        friend std::ostream &operator<<(std::ostream &os, const Vec3i &a)
        {
            os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
            return os;
        }
        friend Vec3i operator+(const Vec3i &a, const Vec3i &b)
        {
            return Vec3i(a.x + b.x, a.y + b.y, a.z + b.z);
        }
        friend void operator+=(Vec3i &a, const Vec3i &b)
        {
            a.x += b.x;
            a.y += b.y;
            a.z += b.z;
        }
    };


}

#endif // VECTORS3_HPP
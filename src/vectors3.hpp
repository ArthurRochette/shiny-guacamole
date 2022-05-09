#ifndef VECTORS3_HPP
#define VECTORS3_HPP


namespace SG
{
    struct vec3f
    {
        vec3f() : x(0), y(0) {};
        vec3f(float x, float y, float z) : x(x), y(y) {};
        float x;
        float y;
        float z;
        void operator=(const vec3f &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
    };

    struct vec3i
    {
        vec3i() : x(0), y(0), z(0) {};
        vec3i(int x, int y, int z): x(x), y(y), z(z){};
        int x;
        int y;
        float z;
        void operator=(vec3i &a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
        }
    };


}

#endif // VECTORS3_HPP
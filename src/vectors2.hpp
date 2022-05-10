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
        friend std::ostream &operator<<(std::ostream &os, const vec2f &a)
        {
            os << "(" << a.x << ", " << a.y << ")";
            return os;
        }
        void operator=(const vec2f &a)
        {
            this->x = a.x;
            this->y = a.y;
        }
    };

    struct vec2i
    {
        vec2i() : x(0), y(0) {};
        vec2i(int x, int y): x(x), y(y) {};
        int x;
        int y;
        friend std::ostream &operator<<(std::ostream &os, const vec2i &a)
        {
            os << "(" << a.x << ", " << a.y << ")";
            return os;
        }
        void operator=(const vec2i &a)
        {
            this->x = a.x;
            this->y = a.y;
        }
    };


}

#endif // VECTORS2_HPP
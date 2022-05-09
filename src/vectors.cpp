#include "vectors.hpp"


SG::Vector2i operator+(const SG::Vector2i &a, const SG::Vector2i &b){

    return SG::Vector2i(a.x + b.x,a.y + b.y);
}

SG::Vector2f operator+(const SG::Vector2f &a, const SG::Vector2f &b){
    return SG::Vector2f(a.x + b.x , a.y + b.y);
}

#include "shape.hpp"


    SG::Shape::Shape() : id(counter++) {}

    SG::Shape::Shape(vec3f size, vec3f pos) : id(counter++), size(size), pos(pos) {
        color = Color(1.0f, 1.0f, 1.0f);
    }

    SG::Shape::Shape(float xSize, float ySize, float zSize, float xPos, float yPos, float zPos) : id(counter++), size(xSize, ySize, zSize), pos(xPos, yPos, zPos) {}

    SG::Shape::~Shape() {}
    
    void SG::Shape::render() {}

    void SG::Shape::setSize(vec3f size) { this->size = size; }

    void SG::Shape::setPos(vec3f pos) { this->pos = pos; }

    void SG::Shape::setSize(float xSize, float ySize, float zSize) { this->size = vec3f(xSize, ySize, zSize); }

    void SG::Shape::setPos(float xPos, float yPos, float zPos) { this->pos = vec3f(xPos, yPos, zPos); }

    SG::vec3f SG::Shape::getSize() { return size; }

    SG::vec3f SG::Shape::getPos() { return pos; }

    void SG::Shape::setColor(Color color) { this->color = color; }

    SG::Color SG::Shape::getColor() { return color; }

    unsigned int SG::Shape::getID() { return id; }
    
    unsigned int SG::Shape::counter = 0;

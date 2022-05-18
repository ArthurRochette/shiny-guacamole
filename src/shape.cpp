#include "shape.hpp"


    SG::Shape::Shape() : id(counter++) {}

    SG::Shape::Shape(Vec3f &size, Vec3f &pos) : id(counter++), size(size), pos(pos) {
        color = Color(1.0f, 1.0f, 1.0f);
    }

    SG::Shape::Shape(float xSize, float ySize, float zSize, float xPosition, float yPosition, float zPosition) : id(counter++), size(xSize, ySize, zSize), pos(xPosition, yPosition, zPosition) {}

    SG::Shape::~Shape() {}
    
    void SG::Shape::setSize(Vec3f size) { this->size = size; }

    void SG::Shape::setPosition(Vec3f pos) { this->pos = pos; }

    void SG::Shape::setSize(float xSize, float ySize, float zSize) { this->size = Vec3f(xSize, ySize, zSize); }

    void SG::Shape::setPosition(float xPosition, float yPosition, float zPosition) { this->pos = Vec3f(xPosition, yPosition, zPosition); }

    SG::Vec3f SG::Shape::getSize() { return size; }

    SG::Vec3f SG::Shape::getPosition() { return pos; }

    void SG::Shape::setColor(Color color) { this->color = color; }

    SG::Color SG::Shape::getColor() { return color; }

    unsigned int SG::Shape::getID() { return id; }

    void SG::Shape::move(Vec3f pos) { 
        std::cerr << "Shape::move()" << std::endl;
        std::cerr << "pos: " << this->pos << std::endl;
        this->pos += pos; 
        this->vertexs += pos;
    }

    void SG::Shape::rotate(Vec3f axis, float angle) {
        Vec3f new_pos = pos;
        new_pos.rotate(axis, angle);
        setPosition(new_pos);
    }

    void SG::Shape::setVertexs(MagicArray<GLfloat> &vertexs) {
        this->vertexs = &vertexs;//FIXME potential risk of failure
    }

    void SG::Shape::setColors(MagicArray<GLfloat> &colors) {
        this->colors = &colors;
    }

    
    unsigned int SG::Shape::counter = 0;

#ifndef POINT_HPP
#define POINT_HPP

#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include "glm/gtc/matrix_transform.hpp"

#include "color.hpp"
#include "displayable.hpp"

#include <iostream>

class Point : public Displayable
{
    public:
    Point(float x, float y, float z);
    ~Point();
    void render();
    void setPosition(glm::vec3 pos);
    void setColor(Color& color);
    Color getColor() const ;
    const std::string getName() const;

    protected:
    Color color;
    glm::vec3 position;
    std::string shapeName;

    private:
    unsigned int VAO, VBO;
};

#endif // POINT_HPP
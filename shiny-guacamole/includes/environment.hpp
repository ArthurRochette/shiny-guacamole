#ifndef ENV_HPP
#define ENV_HPP

#include <iostream>
#include <vector>
#include <memory>

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "shape.hpp"
#include "shader.hpp"

class Environment
{
public:
    Environment(int width, int height, std::string title);
    ~Environment();
    void addShape(std::shared_ptr<Shape> shape);
    void addShape(Shape &shape);
    void removeShape(std::shared_ptr<Shape> shape);
    void removeShape(int index);
    std::vector<std::shared_ptr<Shape>> getShapes() const;
    void render();
    void setShaders(const GLchar* vertexShader, const GLchar* fragmentShader);

private:
    GLFWwindow *window;
    Shader shaders;
    std::vector<std::shared_ptr<Shape>> shapes;
};

#endif // ENV_HPP
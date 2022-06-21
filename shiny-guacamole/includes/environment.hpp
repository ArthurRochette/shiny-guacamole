#ifndef ENV_HPP
#define ENV_HPP

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "shape.hpp"
#include "shader.hpp"
#include "displayable.hpp"

#include <iostream>
#include <vector>
#include <memory>

// TODO faire deux systemes de rendu un rapide (chaque frame) un autre plus lent (interface)

class Environment
{
public:
    Environment(int width, int height, std::string title);
    ~Environment();
    void add(std::shared_ptr<Displayable> shape);
    void add(Displayable &shape);
    void removeShape(std::shared_ptr<Shape> shape);
    void removeShape(int index);
    std::vector<std::shared_ptr<Displayable>> getShapes() const;
    void render();
    void setShaders(const GLchar *vertexShader, const GLchar *fragmentShader);
    void computeLogic();
    std::shared_ptr<Displayable> getShape(int index);
    std::shared_ptr<Displayable> getShape(std::string name);

private:
    GLFWwindow *window;
    Shader shaders;
    std::vector<std::shared_ptr<Displayable>> shapes;
};

#endif // ENV_HPP
#ifndef ENV_HPP
#define ENV_HPP

#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include "shape.hpp"
#include "shader.hpp"
#include "displayable.hpp"
#include "UI/interface.hpp"

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

/**
 * @brief Environment class
 * @details This class is used to create a window and manage the display of shapes.
 */
class Environment
{
public:
    Environment(int width, int height, std::string title);
    ~Environment();
    void addShape(std::shared_ptr<Shape> shape);
    void addShape(Shape &shape);
    void addUI(std::shared_ptr<Interface> ui);
    void addUI(Interface &ui);
    void removeShape(std::shared_ptr<Shape> shape);
    void removeShape(int index);
    void removeUI(std::shared_ptr<Interface> ui);
    void removeUI(int index);
    std::vector<std::shared_ptr<Shape>> getShapes() const;
    std::vector<std::shared_ptr<Interface>> getUIs() const;
    void render();
    void setShaders(const GLchar *vertexShader, const GLchar *fragmentShader);
    void computeLogic();
    std::shared_ptr<Shape> getShape(int index);
    std::shared_ptr<Shape> getShape(std::string name);
    std::shared_ptr<Interface> getUI(int index);
    std::shared_ptr<Interface> getUI(std::string name);

private:
    GLFWwindow *window;
    Shader shaders;
    Shader uiShaders;
    std::vector<std::shared_ptr<Shape>> shapes;
    std::vector<std::shared_ptr<Interface>> UIs;
};

#endif // ENV_HPP
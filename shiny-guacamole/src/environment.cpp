#include "environment.hpp"

#include <iostream>


void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void error_callback(int error, const char *description);
void processInput(GLFWwindow *window);

Environment::Environment(int width, int height, std::string title)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwSetErrorCallback(error_callback);

    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
    if (window == NULL)
    {
        std::cout << "ENVIRONMENT::CONSTRUCT::WINDOW::FAILED" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "ENVIRONMENT::CONSTRUCT::GLAD::FAILED" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    shaders = Shader("./shaders/vertex.glsl", "./shaders/fragment.glsl");
}

Environment::~Environment()
{
    glfwTerminate();
}

void Environment::addShape(std::shared_ptr<Shape> shape)
{
    shapes.push_back(shape);
}

void Environment::addShape(Shape &shape)
{
    shapes.push_back(std::shared_ptr<Shape>(&shape));
}

void Environment::addUI(std::shared_ptr<Interface> ui)
{
    UIs.push_back(ui);
}

void Environment::addUI(Interface &ui)
{
    UIs.push_back(std::shared_ptr<Interface>(&ui));
}

void Environment::removeUI(std::shared_ptr<Interface> ui)
{
    for (int i = 0; i < UIs.size(); i++)
    {
        if (UIs[i] == ui)
        {
            UIs.erase(UIs.begin() + i);
            return;
        }
    }
}

void Environment::removeUI(int index)
{
    UIs.erase(UIs.begin() + index);
}

void Environment::removeShape(std::shared_ptr<Shape> shape)
{
    for (int i = 0; i < shapes.size(); i++)
    {
        if (shapes[i] == shape)
        {
            shapes.erase(shapes.begin() + i);
        }
    }
}

void Environment::removeShape(int index)
{
    shapes.erase(shapes.begin() + index);
}

std::vector<std::shared_ptr<Shape>> Environment::getShapes() const
{
    return shapes;
}

std::vector<std::shared_ptr<Interface>> Environment::getUIs() const
{
    return UIs;
}

void Environment::render()
{
    while (!glfwWindowShouldClose(window))
    {
        computeLogic();
        processInput(window);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // creer class camera pour gerer ca
        glm::mat4 model = glm::mat4(1.0f);
        glm::mat4 view = glm::mat4(1.0f);
        glm::mat4 projection = glm::mat4(1.0f);
        glm::mat4 uiProjection = glm::mat4(1.0f);
        
        model = glm::rotate(model, glm::radians(-20.0f), glm::vec3(1.0f, 0.0f, 0.0f));
        view = glm::translate(view, glm::vec3(0.0f, 0.0f, -10.0f));

        int width, height;
        glfwGetFramebufferSize(window, &width, &height);

        projection = glm::perspective(glm::radians(45.0f), (float)width / (float)height, 0.1f, 100.0f);
        uiProjection = glm::ortho(-width/100.f, width/100.f, -width/100.f, width/100.f, -1.0f, 100.0f);

        shaders.setMat4("projection", projection);
        shaders.setMat4("model", model);
        shaders.setMat4("view", view);

        // fin class camera

        shaders.use(); 
        for (auto &shape : shapes)
        {
            shape->render();
        }

        shaders.setMat4("projection", uiProjection);
        for (auto &ui : UIs)
        {
            ui->render();
        }

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void Environment::setShaders(const GLchar *vertexShader, const GLchar *fragmentShader)
{
    shaders = Shader(vertexShader, fragmentShader);
}

std::shared_ptr<Shape> Environment::getShape(int index)
{
    return shapes[index];
}

std::shared_ptr<Shape> Environment::getShape(std::string name)
{
    for (int i = 0; i < shapes.size(); i++)
    {
        if (shapes[i]->getName() == name)
        {
            return shapes[i];
        }
    }
    return nullptr;
}

std::shared_ptr<Interface> Environment::getUI(int index)
{
    return UIs[index];
}

std::shared_ptr<Interface> Environment::getUI(std::string name)
{
    return *std::find_if(UIs.begin(), UIs.end(), [&name](std::shared_ptr<Interface> ui)
                         { return ui->getName() == name; });
}

void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void error_callback(int error, const char *description)
{
    std::cout << "GLFW::ERROR::" << description << std::endl;
}

void processInput(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    {
        glfwSetWindowShouldClose(window, true);
    }
}

#include "environment.hpp"

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

void Environment::add(std::shared_ptr<Displayable> shape)
{
    shapes.push_back(shape);
}

void Environment::add(Displayable &shape)
{
    shapes.push_back(std::shared_ptr<Displayable>(&shape));//FIXME ?>>
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

std::vector<std::shared_ptr<Displayable>> Environment::getShapes() const
{
    return shapes;
}

void Environment::render()
{

    while (!glfwWindowShouldClose(window))
    {
        computeLogic();
        processInput(window);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        shaders.use();
        glm::mat4 model = glm::mat4(1.0f);
        glm::mat4 view = glm::mat4(1.0f);
        glm::mat4 projection = glm::mat4(1.0f);
        model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f));
        view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
        projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);

        unsigned int modelLoc = glGetUniformLocation(shaders.ID, "model");
        unsigned int viewLoc = glGetUniformLocation(shaders.ID, "view");

        glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
        glUniformMatrix4fv(viewLoc, 1, GL_FALSE, &view[0][0]);
        shaders.setMat4("projection", projection);

        for (int i = 0; i < shapes.size(); i++)
        {
            shapes[i]->render();
        }
        
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void Environment::setShaders(const GLchar *vertexShader, const GLchar *fragmentShader)
{
    shaders = Shader(vertexShader, fragmentShader);
}

std::shared_ptr<Displayable> Environment::getShape(int index)
{
    return shapes[index];
}

std::shared_ptr<Displayable> Environment::getShape(std::string name)
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

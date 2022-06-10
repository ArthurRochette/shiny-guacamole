#include "environment.hpp"


void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void error_callback(int error, const char* description);


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
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "ENVIRONMENT::CONSTRUCT::GLAD::FAILED" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

}

Environment::~Environment(){
    glfwTerminate();
    delete window;
}

void Environment::addShape(std::shared_ptr<Shape> shape){
    shapes.push_back(shape);
}

void Environment::removeShape(std::shared_ptr<Shape> shape){
    for(int i = 0; i < shapes.size(); i++){
        if(shapes[i] == shape){
            shapes.erase(shapes.begin() + i);
        }
    }
}

void Environment::removeShape(int index){
    shapes.erase(shapes.begin() + index);
}

std::vector<std::shared_ptr<Shape>> Environment::getShapes() const {
    return shapes;
}

void Environment::render(){
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    for(int i = 0; i < shapes.size(); i++){
        shapes[i]->render();
    }

    glfwSwapBuffers(window);
    glfwPollEvents();
}




void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void error_callback(int error, const char* description)
{
    std::cout << "GLFW::ERROR::" << description << std::endl;
}
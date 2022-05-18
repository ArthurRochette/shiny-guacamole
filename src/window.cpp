#include "window.hpp"
#include <stdexcept>

void GLAPIENTRY
MessageCallback( GLenum source,
                 GLenum type,
                 GLuint id,
                 GLenum severity,
                 GLsizei length,
                 const GLchar* message,
                 const void* userParam );

SG::Window::Window(vec2i size,vec2i pos, char const *name ): size(size), pos(pos), windowId(windowCount++){
    window = glfwCreateWindow(size.x, size.y, name, NULL, NULL);
    glfwMakeContextCurrent(window);
    gladLoadGL();
    if (window == nullptr)
    {
        throw std::runtime_error("Failed to create GLFW window");
    }
    glEnable(GL_DEBUG_OUTPUT);
    glDebugMessageCallback(MessageCallback, 0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glFrustum(-10.0f, 10.0f, -10.0f, -10.0f, 1.0f, 40.0f); 


}

SG::Window::Window(int x_size, int y_size, int x_pos , int y_pos, char const *name): size(x_size, y_size), pos(x_pos, y_pos), windowId(windowCount++)
{
    window = glfwCreateWindow(x_size, y_size, name, NULL, NULL);
    
    glfwMakeContextCurrent(window);
    gladLoadGL();

    if (window == nullptr)
    {
        throw std::runtime_error("Failed to create GLFW window");
    }
    glViewport(0, 0, x_size, y_size);
    glEnable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDepthFunc(GL_LESS);
    glDepthRange(0.0f, 1.0f);
    
}

void SG::Window::render()
{
    glfwMakeContextCurrent(window);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    for(auto shape : shapes){
        shape->render();
    }
    glFlush();
    glfwSwapBuffers(window);

}

GLFWwindow * const SG::Window::getWindow(){
    return window;
}

void SG::Window::addShape(Shape *shape)
{
    shapes.push_back(shape);
}

SG::Shape* SG::Window::getShape(int i)
{
    return shapes[i];
}

void GLAPIENTRY
MessageCallback( GLenum source,
                 GLenum type,
                 GLuint id,
                 GLenum severity,
                 GLsizei length,
                 const GLchar* message,
                 const void* userParam )
{
  fprintf( stderr, "GL CALLBACK: %s type = 0x%x, severity = 0x%x, message = %s\n",
           ( type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : "" ),
            type, severity, message );
}
unsigned int SG::Window::windowCount = 0;
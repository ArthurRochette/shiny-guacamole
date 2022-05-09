#include "environment.hpp"
#include <iostream>
#include <X11/Xlib.h>

void ErrorCallback(int, const char *err_str);
void WindowLife(GLFWwindow *window);

SG::Environment::Environment()
{
    glfwSetErrorCallback(ErrorCallback);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return;
    }
}

void SG::Environment::start()
{
    while (true)
    {
        for(auto it = windows.begin(); it < windows.end(); it++){
            
            (*it)->render();
            
            if(glfwWindowShouldClose((*it)->getWindow())){
                glfwTerminate();
                exit(EXIT_SUCCESS);
            }
        }
        glfwWaitEvents();
    }
}

void SG::Environment::addWindow(int sizex, int sizey, char const *name)
{
    Window *window = new Window(sizex, sizey, name);
    this->windows.push_back(window);
}


void ErrorCallback(int, const char *err_str)
{
    std::cout << "GLFW Error: " << err_str << std::endl;
}



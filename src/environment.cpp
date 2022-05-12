#include "environment.hpp"
#include <iostream>
#include <X11/Xlib.h>

void ErrorCallback(int, const char *err_str);
void WindowLife(GLFWwindow *window);

SG::Environment::Environment()
{
    if (!glfwInit())
    {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return;
    }
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwSetErrorCallback(ErrorCallback);
}

void SG::Environment::start()
{
    while (true)
    {
        for(auto it = windows.begin(); it < windows.end(); it++){
            
            (*it)->render();
            compute();
            
            if(glfwWindowShouldClose((*it)->getWindow())){
                glfwTerminate();
                exit(EXIT_SUCCESS);
            }
        }
        glfwPollEvents();
    }
}

void SG::Environment::addWindow(int sizex, int sizey,int posx, int posy, char const *name)
{
    Window *window = new Window(sizex, sizey, posx, posy, name);
    this->windows.push_back(window);
}

void SG::Environment::addWindow(Window *window)
{
    this->windows.push_back(window);
}

SG::Window *SG::Environment::getWindow(int index)
{
    if (index >= windows.size())
    {
        std::cerr << "Index out of range" << std::endl;
        return nullptr;
    }
    return this->windows[index];
}


void ErrorCallback(int, const char *err_str)
{
    std::cout << "GLFW Error: " << err_str << std::endl;
}



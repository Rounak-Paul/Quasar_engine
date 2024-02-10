#include "Window.h"

namespace Quasar {
    Window::Window(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
        Init();
    }

    Window::~Window() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void Window::Init() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(
            width,
            height,
            windowName.c_str(),
            nullptr, // For full screen mode set monitor
            nullptr
        );
    }
}
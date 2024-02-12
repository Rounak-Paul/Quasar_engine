#pragma once

#include <common.h>
#include <Core/Core.h>

namespace Quasar {

    class QUASAR_API Window {
        public:
        Window() {};
        Window(int w, int h, std::string name);
        ~Window();

        bool ShouldClose() {return glfwWindowShouldClose(window);}
        GLFWwindow* GetWindow() const {return window;}

        private:
        void Init();
        int width;
        int height;

        std::string windowName;
        GLFWwindow* window;
    };
}
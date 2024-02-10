/*
-------------------------------------------------------------------------------
Application	:		Quasar Engine

Author		:		Rounak Paul
Email		:		paulrounak1999@gmail.com
Date		:		7th Feb 2024

Description	:		Quasar::Application implementation
-------------------------------------------------------------------------------
*/
#include "Application.h"

namespace Quasar {

	Application::Application() {
		
	}

	Application::~Application() {}

	void Application::Run()
	{
        glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		GLFWwindow*window=glfwCreateWindow(800,600,"Vulkanwindow", nullptr,nullptr);

		uint32_t extensionCount=0;
		vkEnumerateInstanceExtensionProperties(nullptr,&extensionCount, nullptr);

		std::cout<<extensionCount<<"extensionssupported\n";

		glm::mat4 matrix;
		glm::vec4 vec;
		auto test=matrix*vec;

		while(!glfwWindowShouldClose(window)){
			glfwPollEvents();
		}

		glfwDestroyWindow(window);

		glfwTerminate();
        
	}


}
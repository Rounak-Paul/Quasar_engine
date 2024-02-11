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

	void Application::Init() {
		window = new Window(WIDTH, HEIGHT, NAME);

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO(); (void)io;
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls
		io.ConfigFlags |= ImGuiConfigFlags_DockingEnable;         // Enable Docking
		io.ConfigFlags |= ImGuiConfigFlags_ViewportsEnable;       // Enable Multi-Viewport / Platform Windows
		ImGui::StyleColorsDark();
		ImGui_ImplGlfw_InitForVulkan(window->GetWindow(), true);
		// ImGui_ImplVulkan_Init();
	}

	void Application::Update() {
		while (!window->ShouldClose()) {
			glfwPollEvents();
		}
	}

    void Application::Shutdown() {
		delete window;
    }

    void Application::Run(){
        Init();
		Update();
		Shutdown();
	}


}
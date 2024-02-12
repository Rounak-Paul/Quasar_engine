/*
-------------------------------------------------------------------------------
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Vector4 Studios <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Application	:		Quasar Engine

Author		:		Rounak Paul
Email		:		paulrounak1999@gmail.com
Date		:		7th Feb 2024

Description	:		The Application class is the main interface between the 
					Urse Application and Quasar Engine. Create an instance of 
					this class and call Run() to start the Main Engine. 
-------------------------------------------------------------------------------
*/

#pragma once

#include <common.h>
#include <Core/Core.h>

#include <Window/Window.h>
#include <Renderer/Renderer.h>

namespace Quasar {

	class QUASAR_API Application {
    public:
        Application();
		~Application();

        void Run();

		void Init();
		void Update();
		void Shutdown();

		int WIDTH = 800;
		int HEIGHT = 600;
		std::string NAME = "QuasarEngine";

	private:
		Window* window;
		Renderer* renderer;
	};

	// To be defined in Client
	Application* CreateApplication();

}
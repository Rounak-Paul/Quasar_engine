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

#include "../Core.h"

namespace Quasar {

	/// <summary>
	/// Create and Run main Application
	/// </summary>
	class QUASAR_API Application
	{
    public:
        Application();
		virtual ~Application();

        void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}
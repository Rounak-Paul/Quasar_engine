/*
-------------------------------------------------------------------------------
Application	:		Quasar Engine

Author		:		Rounak Paul
Email		:		paulrounak1999@gmail.com
Date		:		7th Feb 2024

Description	:		Entry Point for the User Application. Contains main() 
					function. Execution stats here.
-------------------------------------------------------------------------------
*/

#pragma once
#include <common.h>

extern Quasar::Application* Quasar::CreateApplication();

/// <summary>
/// Init methods for Core Engine
/// </summary>
void init() {
	std::cout << "Starting Quasar Engine" << std::endl;
}

int main(int argc, char** argv)
{
	init();

	auto app = Quasar::CreateApplication();
	app->Run();
	delete app;
}
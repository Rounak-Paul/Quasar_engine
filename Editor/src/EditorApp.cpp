#pragma once
#include <Quasar.h>

#include <iostream>

class Sandbox : public Quasar::Application
{
public:

	Sandbox()
	{
		std::cout << "Test from SandBox Application" << std::endl;
		WIDTH = 1920;
		HEIGHT = 1080;
		NAME = "Quasar Editor";

	}
	~Sandbox()
	{

	}
};

Quasar::Application* Quasar::CreateApplication()
{
	return new Sandbox();
};
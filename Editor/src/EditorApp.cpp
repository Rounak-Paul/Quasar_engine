#pragma once
#include <Quasar.h>

#include <iostream>

class Sandbox : public Quasar::Application
{
public:

	Sandbox()
	{
		std::cout << "Test from SandBox Application" << std::endl;
		WIDTH = 1280;
		HEIGHT = 720;
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
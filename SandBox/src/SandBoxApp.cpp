#pragma once
#include <Quasar.h>

#include <iostream>

class Sandbox : public Quasar::Application
{
public:

	Sandbox()
	{
		std::cout << "Test from SandBox Application" << std::endl;
	}
	~Sandbox()
	{

	}
};

Quasar::Application* Quasar::CreateApplication()
{
	return new Sandbox();
};
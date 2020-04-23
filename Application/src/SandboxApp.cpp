#include "TE.h"

class Sandbox : public TestEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

TestEngine::Application* TestEngine::CreateApplication()
{
	return new Sandbox();
}
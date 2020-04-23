#pragma once

#include "Core.h";

namespace TestEngine {

	class TE_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}


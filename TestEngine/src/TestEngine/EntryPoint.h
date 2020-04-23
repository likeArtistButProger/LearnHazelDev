#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern TestEngine::Application* TestEngine::CreateApplication();

int main(int argc, char** argv)
{
	TestEngine::Log::Init();
	TE_CORE_WARN("Initialized Core Log!");
	TE_INFO("Initialized Client Log!");


	auto app = TestEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
#pragma once

#ifdef TE_PLATFORM_WINDOWS

extern TestEngine::Application* TestEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Entry point is passed through");
	auto app = TestEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
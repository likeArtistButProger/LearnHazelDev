#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace TestEngine {
	class TE_API Log
	{
	public: 
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


// Core log macros

#define TE_CORE_ERROR(...) ::TestEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TE_CORE_WARN(...)  ::TestEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TE_CORE_INFO(...)  ::TestEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TE_CORE_TRACE(...) ::TestEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TE_CORE_FATAL(...) ::TestEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros

#define TE_ERROR(...) ::TestEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define TE_WARN(...)  ::TestEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TE_INFO(...)  ::TestEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define TE_TRACE(...) ::TestEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TE_FATAL(...) ::TestEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
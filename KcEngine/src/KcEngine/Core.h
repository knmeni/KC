#pragma once

#ifdef KC_PLATFORM_WINDOWS
	#ifdef KC_BUILD_DLL
		#define KC_ENGINE_API __declspec(dllexport)
	#else 
		#define KC_ENGINE_API __declspec(dllimport)
	#endif
#else 
	#error KcEngine only supports Windows!
#endif //  KC_PLATFORM_WINDOWS


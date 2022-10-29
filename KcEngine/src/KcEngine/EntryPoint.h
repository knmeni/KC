#pragma once


#ifdef KC_PLATFORM_WINDOWS

extern KcEngine::Application* KcEngine::CreateApplication();
int main(int argc, char** argv )
{
	auto app = KcEngine::CreateApplication();
	app->Run();
	delete app;
}


#endif
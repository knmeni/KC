#pragma once

#include "Core.h"
namespace KcEngine {

	 class KC_ENGINE_API Application {

	public:
		Application();
		virtual ~Application();

		void Run();
	};


	 //To be define in our CLIENT
	 Application* CreateApplication();

}

#include <KcEngine.h>

class Sandbox :public KcEngine::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


KcEngine::Application* KcEngine::CreateApplication()
{
	return new Sandbox();
}
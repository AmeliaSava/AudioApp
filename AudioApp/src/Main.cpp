#include "Utils.h"

class MainApp : public AudioApp::Application 
{
public:
	MainApp()
	{

	}
	~MainApp()
	{

	}
};

AudioApp::Application* AudioApp::CreateApplication()
{
	return new MainApp();
}
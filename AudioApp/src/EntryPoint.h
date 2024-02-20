#pragma once

//#ifdef PLATFORM_WINDOWS

extern AudioApp::Application* AudioApp::CreateApplication();

int main(int argc, char** argv)
{
	auto app = AudioApp::CreateApplication();
	app->Run();

	delete app;
}

//#endif // PLATFORM_WINDOWS



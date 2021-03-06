#include "src/graphics/window.h"
#include <Windows.h>

int main();

#ifdef WINMAIN
int _stdcall WinMain(_In_ HINSTANCE hInstance,_In_ HINSTANCE prevInstance, _In_ LPSTR lpCmdLine, _In_ int cmdShow)
{
	return main();
}
#endif

using real::graphics::Window;

int main()
{
	Window window("Real Engine Test", 1080, 720);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);
	while (!window.isClosed())
	{
		window.clear();
		window.update();
	}
	return 0;
}


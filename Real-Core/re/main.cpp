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
	while (!window.isClosed())
	{
		window.update();
	}
	return 0;
}


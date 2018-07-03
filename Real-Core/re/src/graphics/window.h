#pragma once

#include <iostream>
#include <GLFW/glfw3.h>

namespace real
{
	namespace graphics
	{
		class Window
		{
		public:
			Window(const char* name, int width, int height);
			~Window();

			void update();
			bool isClosed();

		private:
			int m_Width, m_Height;
			const char* m_Name;
			GLFWwindow* m_Window;
			bool m_Closed;
			bool init();
		};
	}
}
#include "window.h"

namespace real
{
	namespace graphics
	{
		Window::Window(const char * name, int width, int height)
		{
			m_Name = name;
			m_Width = width;
			m_Height = height;

			if (!init())
			{
				std::cout << "Cannot Inizialize The Window\n";
			}
		}

		Window::~Window()
		{
			glfwDestroyWindow(m_Window);
			glfwTerminate();
		}

		bool Window::init()
		{
			if (!glfwInit())
			{
				std::cout << "Cannot Inizialize GLFW\n";
				return false;
			}
			m_Window = glfwCreateWindow(m_Width, m_Height, m_Name, nullptr, nullptr);
			if (!m_Window)
			{
				glfwTerminate();
				std::cout << "Cannot Inizialize GLFWwindow\n";
				return false;
			}
			glfwMakeContextCurrent(m_Window);
			return true;
		}

		void Window::update()
		{
			m_Closed = glfwWindowShouldClose(m_Window);
			glfwSwapBuffers(m_Window);
			glfwPollEvents();
		}
		void Window::clear() const
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}
		bool Window::isClosed()
		{
			return m_Closed;
		}
	}
}
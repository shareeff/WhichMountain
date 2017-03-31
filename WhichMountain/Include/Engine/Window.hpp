#pragma once
#ifndef ENGINE_WINDOW_HPP
#define ENGINE_WINDOW_HPP

#include <SDL.h>
#include <memory>
#include <vector>

namespace engine
{
	typedef std::shared_ptr<class Window> WindowPtr;

	class Window
	{
	public:
		static WindowPtr Create(const char* title, int width, int height);

		Window(const char* title, int width, int height);
		~Window();

		void ProcessEvents();
		std::vector<SDL_Event> GetEvents();

		void SwapBuffers();

		int GetTicks();

		void VerticalSync(bool vsync=true);
		void CaptureMouse(bool captureMouse=true);

		void Close(bool shouldClose=true) { m_shouldClose = shouldClose; }
		bool ShouldClose() { return m_shouldClose; }

	private:
		SDL_Window* m_window;
		bool m_shouldClose;

		std::vector<SDL_Event> m_events;
	};
}

using engine::WindowPtr;
using engine::Window;

#endif

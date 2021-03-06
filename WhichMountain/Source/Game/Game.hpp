#pragma once
#ifndef GAME_GAME_HPP
#define GAME_GAME_HPP

#include "../Engine/Window.hpp"
#include "../Engine/InputManager.hpp"
#include "../Engine/ScreenManager.hpp"
#include "../Engine/ContentManager.hpp"
#include "../Engine/AudioManager.hpp"

namespace game
{
	/**
	 * Represents the main game class.
	 */
	class Game
	{
	public:
		Game();

		void Run();

	private:
		void Update(int elapsedTime);
		void Draw(int elapsedTime);

		Window m_window;
		InputManager m_input;
		ScreenManager m_screens;
		ContentManager m_content;
		AudioManager m_audio;
	};
}

using game::Game;

#endif

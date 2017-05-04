#pragma once
#ifndef GAME_SCREENS_LOADINGSCREEN_HPP
#define GAME_SCREENS_LOADINGSCREEN_HPP

#include "../../Engine/Window.hpp"
#include "../../Engine/InputManager.hpp"
#include "../../Engine/ScreenManager.hpp"
#include "../../Engine/ContentManager.hpp"
#include "../../Engine/Sprite.hpp"

#include <vector>
#include <memory>

namespace game
{
	namespace screens
	{
		class LoadingScreen : public IScreen
		{
		public:
			static IScreenPtr Create(Window* window, InputManager* input, ScreenManager* screens, ContentManager* content) {
				return std::make_unique<LoadingScreen>(window, input, screens, content);
			}

			LoadingScreen(Window* window, InputManager* input, ScreenManager* screens, ContentManager* content);

			void Update(int elapsedTime) override;
			void Draw(int elapsedTime) override;

		private:
			Window* m_window;
			InputManager* m_input;
			ScreenManager* m_screens;
			ContentManager* m_content;

			Sprite m_sprite;
			bool m_hasDrawn;
		};
	}
}

using game::screens::LoadingScreen;

#endif
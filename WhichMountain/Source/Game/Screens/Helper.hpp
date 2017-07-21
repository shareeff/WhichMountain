#pragma once
#ifndef GAME_SCREENS_HELPER_HPP
#define GAME_SCREENS_HELPER_HPP

#include "../../Engine/ScreenManager.hpp"

namespace game
{
	namespace screens
	{
		template<typename T>
		static IScreenPtr Create(Window& window, InputManager& input, ScreenManager& screens, ContentManager& content, AudioManager& audio)
		{
			return std::make_unique<T>(window, input, screens, content, audio);
		};
	}
}

#endif
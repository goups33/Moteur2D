#pragma once

#include <memory>

#include <SFML/Graphics.hpp>

class StateManager;

struct GameContext
{
	std::unique_ptr<sf::RenderWindow> window = nullptr ;

	std::unique_ptr<StateManager> stateManager = nullptr;

	void Init();
};
#include "GameContext.hpp"
#include "StateManager.hpp"

void GameContext::Init() {
	window = std::make_unique<sf::RenderWindow>(sf::VideoMode({ 800, 600 }), "Moteur 2D");
	stateManager = std::make_unique<StateManager>(*this);
}
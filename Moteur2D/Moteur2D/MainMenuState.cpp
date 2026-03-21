#include "MainMenuState.hpp"

MainMenuState::MainMenuState(GameContext& context) :
	State(context)
{

}

void MainMenuState::Init() {

}

void MainMenuState::HandleInput(const sf::Event& event) {

}

void MainMenuState::Update(float DeltaTime) {

}

void MainMenuState::Draw() {
	context.window->clear(sf::Color::Blue);
}
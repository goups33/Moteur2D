#include <iostream>

#include "SFML/Graphics.hpp"

#include "GameContext.hpp"
#include "StateManager.hpp"
#include "MainMenuState.hpp"

int main()
{
	GameContext context;
	context.Init();
	context.stateManager->AddState(std::make_unique<MainMenuState>(context));
	while (context.window->isOpen()) {
		while (const std::optional event = context.window->pollEvent()) {
			if (event->is<sf::Event::Closed>()) {
				context.window->close();
			}
		}
		context.stateManager->ProcessStateChanges();
		context.stateManager->update(1.f / 60.f);
		context.window->clear();
		context.stateManager->draw();
		context.window->display();
	}
}
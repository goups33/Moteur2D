#pragma once

#include "State.hpp"
#include "GameContext.hpp"
#include "StateManager.hpp"

class MainMenuState : public State
{
public:
	MainMenuState(GameContext& context);

	void Init() override;
	void HandleInput(const sf::Event& event) override;

	void Update(float DeltaTime) override;

	void Draw() override;
private:
};


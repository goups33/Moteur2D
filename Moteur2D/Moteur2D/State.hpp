#pragma once

#include <SFML/Graphics.hpp>

#include "GameContext.hpp"



class State
{
public:

	State(GameContext& context);
	virtual ~State() = default ;

	virtual void Init() = 0;
	virtual void HandleInput(const sf::Event& event) = 0;

	virtual void Update(float DeltaTime) = 0;

	virtual void Draw() = 0;

protected:
	GameContext& context;
};
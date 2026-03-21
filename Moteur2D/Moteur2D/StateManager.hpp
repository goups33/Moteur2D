#pragma once

#include <vector>
#include <memory>

#include "State.hpp"
#include "GameContext.hpp"

class StateManager
{
public:
	StateManager(GameContext& context);
	void AddState(std::unique_ptr<State> state);
	void RemoveState();
	void ChangeState(std::unique_ptr<State> state);
	void ProcessStateChanges();
	void update(float DeltaTime);
	void draw();
private:
	GameContext& m_context;

	std::vector<std::unique_ptr<State>> m_states;
	std::unique_ptr<State> m_newStates;
	
	bool m_add = false;
	bool m_replace = false;
	bool m_remove = false;
	
};
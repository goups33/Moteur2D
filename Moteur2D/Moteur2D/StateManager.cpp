#include "StateManager.hpp"

StateManager::StateManager(GameContext& context) : m_context(context)
{
}

void StateManager::AddState(std::unique_ptr<State> state)
{
	m_newStates = std::move(state) ;
	m_add = true;
}

void StateManager::RemoveState()
{
	m_remove = true;
}

void StateManager::ChangeState(std::unique_ptr<State> state)
{
	m_newStates = std::move(state);
	m_replace = true;
}

void StateManager::ProcessStateChanges()
{
	if (m_remove) {
		m_remove = false;
		m_states.pop_back();
	}
	if (m_replace) {
		m_replace = false;
		m_states.pop_back();
		m_states.push_back(std::move(m_newStates));
		m_states.back()->Init();
	}
	if (m_add) {
		m_add = false;
		m_states.push_back(std::move(m_newStates));
		m_states.back()->Init();
	}
}

void StateManager::update(float DeltaTime)
{
	if (!m_states.empty()) {
		m_states.back()->Update(DeltaTime);
	}
}

void StateManager::draw()
{
	if (!m_states.empty()) {
		m_states.back()->Draw();
	}
}
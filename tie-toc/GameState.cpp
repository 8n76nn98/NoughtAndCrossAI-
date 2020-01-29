//
// Created by Ming Shi on 29/01/2020.
//

#include "GameState.h"
#include "Support.h"
GameState::GameState(void)
{

    m_evaluator = nullptr;
}
GameState::~GameState()
{

}
const GameState& GameState::operator=(const GameState &state)
{
    if(this != &state)
    {
        m_evaluator =state.m_evaluator;
        m_playerId = state.m_playerId;
        mem
    }
}
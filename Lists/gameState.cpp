//  CS 250
//  gameState.cpp
//  Hnagman Game
//  Created by Tamara Edmond on 11/2/24.
//

#include "gameState.hpp"

GameState::GameState() : nextState(0) {
    state = { "PLATFORM", "HEAD", "BODY", "LEFT_ARM", "RIGHT_ARM", "LEFT_LEG", "RIGHT_LEG" };
}

std::string GameState::getState() const {
    if (nextState == 0) return "EMPTY";
    return state[nextState - 1];
}

void GameState::addState() {
    if (nextState < state.size()) {
        nextState++;
    }
}

bool GameState::gameOver() const {
    return nextState >= state.size();
}

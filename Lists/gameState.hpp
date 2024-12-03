//  CS 250
//  gameState.hpp
//  Hangman Game
//  Created by Tamara Edmond on 11/2/24.
//

#ifndef gameState_hpp
#define gameState_hpp

#include <stdio.h>
#include <string>
#include <vector>

class GameState {
private:
    std::vector<std::string> state;
    int nextState;

public:
    GameState();
    std::string getState() const;
    void addState();
    bool gameOver() const;
};

#endif

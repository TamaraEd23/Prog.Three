//  CS 250
//  guessedLetters.cpp
//  Hangman Game
//  Created by Tamara Edmond on 11/2/24.
//

#include "guessedLetters.hpp"
// #include "guessedLetters.h"

GuessedLetters::GuessedLetters() {}

std::string GuessedLetters::getLetters() const {
    return std::string(guessed.begin(), guessed.end());
}

void GuessedLetters::addLetter(char letter) {
    if (std::find(guessed.begin(), guessed.end(), letter) == guessed.end()) {
        guessed.push_back(letter);
    }
}

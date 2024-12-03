//  CS 250
//  guessedLetters.hpp
//  Hangman Game
//  Created by Tamara Edmond on 12/2/24.
//

#ifndef guessedLetters_hpp
#define guessedLetters_hpp

#include <stdio.h>

#include <vector>
#include <string>

class GuessedLetters {
private:
    std::vector<char> guessed;

public:
    GuessedLetters();
    std::string getLetters() const;
    void addLetter(char letter);
};

#endif

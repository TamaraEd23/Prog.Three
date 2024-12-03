//  CS 250
//  guessedLetters.hpp
//  Hangman Game
//  Created by Tamara Edmond on 12/2/24.
//

#ifndef guessedLetters_hpp
#define guessedLetters_hpp

#include <stdio.h>

//#endif /* guessedLetters_hpp */
//#ifndef GUESSEDLETTERS_H
//#define GUESSEDLETTERS_H

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

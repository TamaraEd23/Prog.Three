//  CS 250
//  Word.cpp
//  Hangman Game
//  Created by Tamara Edmond on 12/2/24.
//

#include "Word.hpp"

Word::Word(const std::string& word) : word(word) {
    currentWord = std::vector<char>(word.length(), '_');
}

std::string Word::getWord() const {
    return std::string(currentWord.begin(), currentWord.end());
}

void Word::addLetter(char letter) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (word[i] == letter) {
            currentWord[i] = letter;
        }
    }
}

bool Word::findLetter(char letter) const {
    for (size_t i = 0; i < word.length(); ++i) {
           if (word[i] == letter) {
               return true;
           }
       }
       return false;
   }

bool Word::solved() const {
    for (size_t i = 0; i < word.length(); ++i) {
            if (currentWord[i] != word[i]) {
                return false;
            }
        }
        return true;
    }


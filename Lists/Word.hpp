//  CS 250
//  Word.hpp
//  Hangman Game
//  Created by Tamara Edmond on 11/2/24.
//

#ifndef Word_hpp
#define Word_hpp

#include <stdio.h>
#include <string>
#include <vector>

class Word {
private:
    std::vector<char> currentWord;
    std::string word;

public:
    Word(const std::string& word);
    std::string getWord() const;
    void addLetter(char letter);
    bool findLetter(char letter) const;
    bool solved() const;
};

#endif

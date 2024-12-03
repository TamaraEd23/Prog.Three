//  CS 250
//  main.cpp
//  Hangman Game
//  Created by Tamara Edmond on 11/2/24.
//
#include <iostream>
#include "Word.hpp"
#include "guessedLetters.hpp"
#include "gameState.hpp"
using namespace std;

int main()
{
    Word word("JUGGLE");
    GuessedLetters guessed = GuessedLetters();
    GameState state = GameState();
    char letter;

    do {
       cout << "Game state: " << state.getState() << endl;
       cout << "Guessed letters: " << guessed.getLetters() << endl;
       cout << "Guess this word: " << word.getWord() << endl << endl;
       cout << "Guess a letter: ";
       cin >> letter;
       letter = toupper(letter);
       if (word.findLetter(letter)) {
          word.addLetter(letter);
       }
       else {
          guessed.addLetter(letter);
          state.addState();
       }
    } while ( (!state.gameOver()) && (!word.solved()) );

    if (state.gameOver()) {
       cout << endl << "Game state: " << state.getState() << endl;
       cout << "Sorry you lose"  << endl;
       cout << "The word was: JUGGLE" << endl;
    }
    else {
        cout << endl << "Congratulations, you guessed the word: " <<  word.getWord() << endl;
    }

    return 0;
}

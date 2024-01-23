#include "game.h"
#include <iostream>
using namespace std;

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with "<< numOfGuesses <<" guesses" << endl;
}

Game::Game(int maxNumber) : maxNumber(maxNumber)
{
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maxium value" << endl;
}
Game::~Game()
{
    cout << "GAME CONSTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    // Add the game logic here
    srand((unsigned) time(NULL));
    randomNumber = 1 + (rand() % maxNumber);

    cout << "Give your guess between 1-" << maxNumber << endl;
    cin >> playerGuess;
    numOfGuesses++;
    while (playerGuess != randomNumber) {
        if (playerGuess > randomNumber) {
        cout << "Your guess is too big\n";
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;
        }
        if (playerGuess < randomNumber) {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cout << "Your guess is too small\n";
        cin >> playerGuess;
        numOfGuesses++;
        }
    }
    printGameResult();
}

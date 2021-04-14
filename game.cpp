#include <iostream>
#include <string>
using namespace std;


/* 
    Game: The Rules:
    1) Player 1 selects a random number
    2) Player 2 needs to guess the number
    3) The game will tell Player 2 whether the guess is too low or too high
    4) The game will count the number of attemots Player 2 made
 */



int main(){
    int theNumberToGuess = 0;
    int currentGuess = 0;

    cout << "Welcome to the guessing game! " << endl << endl;
    cout << "Player One: Please select a number: " << endl;
    cin >> theNumberToGuess;

    while (true){
        cout << "Player Two: Please guess the number: " << endl;
        cin >> currentGuess;

        if(currentGuess > theNumberToGuess) {
            cout << "TOO HIGH! Guess lower! " << endl;
        }
        else if(currentGuess < theNumberToGuess) {
            cout << "TOO LOW! Guess higher! " << endl;
        }
        else {
            cout << "YOU GUESSED CORRECTLY!!!";
            break;
        }
        // break the loop when Player 2 has guessed correctly
    }
}

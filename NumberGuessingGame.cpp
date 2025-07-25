#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << " Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the user guesses the number
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempt(s)." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}

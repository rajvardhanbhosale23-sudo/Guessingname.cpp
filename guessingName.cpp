#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int guess, randomNumber, attempts = 0;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    cout << "🎯 Number Guessing Game" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again.";
        } 
        else if (guess < randomNumber) {
            cout << "Too low! Try again.";
        } 
        else {
            cout << "\n🎉 Congratulations!" << endl;
            cout << "You guessed the number correctly." << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != randomNumber);

    return 0;
}

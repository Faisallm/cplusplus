#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    // that's a unique way of writhing the condition

    while (guess != secretNum && !outOfGuesses) {

        if (guessCount < guessLimit) {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    //do {
      //  cout << "Enter a guess: ";
        //cin >> guess;
    //} while(guess != secretNum);

    if (outOfGuesses) {
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }


    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 45;
    int guess;

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    while (guess != secretNumber)
    {
        if (guess < secretNumber)
        {
            cout << "Too low. Try again: ";
        } 
        else 
        {
            cout << "Too high. Try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You guessed the correct number." << endl;

    return 0;
}

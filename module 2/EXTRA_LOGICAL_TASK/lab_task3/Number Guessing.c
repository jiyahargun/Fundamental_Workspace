#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int secretNumber, guess, attempts = 0, maxAttempts = 7;

    srand(time(0));
    secretNumber = rand() % 100 + 

    printf("\n Welcome to the Number Guessing Game!");
    printf("\n I'm thinking of a number between 1 and 100.");
    printf("\n You have %d attempts to guess it.", maxAttempts);

    while (attempts < maxAttempts)
    {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) 
        {
            printf("🎉 Congratulations! You guessed the number in %d attempts!\n", attempts);
            break;
        } 
        else if (guess < secretNumber) 
        {
            printf("\n Too low! Try a higher number.");
        } 
        else 
        {
            printf("\n Too high! Try a lower number");
        }
    }

    if (guess != secretNumber) 
    {
        printf("\n %d Sorry, you've used all your attempts. The number was", secretNumber);
    }

    return 0;
}

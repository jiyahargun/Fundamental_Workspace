#include <stdio.h>

int main() 
{
    int number;

   
    printf("Enter an integer: ");
    scanf("%d", &number);

  
    if (number % 2 == 0)
        printf("\n The number is Even.");
    else
        printf("\n The number is Odd.");


    if (number > 0)
        printf("\n The number is Positive.");
    else if (number < 0)
        printf("\n The number is Negative.");
    else
        printf("The number is Zero.\n");

    
    if (number % 3 == 0 && number % 5 == 0)
        printf("The number is a multiple of both 3 and 5.\n");
    else
        printf("The number is NOT a multiple of both 3 and 5.\n");

    return 0;
}


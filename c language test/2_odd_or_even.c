#include<stdio.h>
#include<conio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
    {
        printf("\n%d is even.", number);
    } 
    else
    {
        printf("\n%d is odd.", number);
    }

    return 0;
}

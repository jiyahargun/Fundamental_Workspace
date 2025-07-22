#include<stdio.h>
#include<conio.h>

int factorial(int n);

int main() 
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = factorial(number);

    
    printf("\n Factorial of %d is %d", number, result);

    return 0;
}

int factorial(int n) 
{
    int fact = 1;

    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }

    return fact;
}

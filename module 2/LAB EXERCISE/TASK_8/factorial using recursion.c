#include<stdio.h>
#include<conio.h>

int factorial(int n);

int main() 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("\n Factorial is not defined for negative numbers");
    } 
    else
    {
        printf("\n Factorial of %d is %d", num, factorial(num));
    }

    return 0;
}

int factorial(int n) 
{
    if (n == 0 || n == 1)  
        return 1;
    else
        return n * factorial(n - 1);  
}

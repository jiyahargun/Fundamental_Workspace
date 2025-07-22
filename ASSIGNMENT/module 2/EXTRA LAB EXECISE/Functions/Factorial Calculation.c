#include <stdio.h>

unsigned long long factorialRecursive(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

unsigned long long factorialIterative(int n) 
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int main()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("\n Factorial is not defined for negative numbers.");
    } 
    else
    {
        unsigned long long factIter = factorialIterative(num);
        unsigned long long factRecur = factorialRecursive(num);

        printf("\n Factorial of %d using Iteration: %llu", num, factIter);
        printf("\n Factorial of %d using Recursion: %llu", num, factRecur);

        printf("\n  Iterative method is generally faster and avoids stack overflow.");
        printf("\n  Recursive method is simple but can be inefficient for large numbers.");
    }

    return 0;
}

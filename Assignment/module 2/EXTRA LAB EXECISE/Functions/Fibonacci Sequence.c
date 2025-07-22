#include <stdio.h>

int fibonacciRecursive(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciIterative(int n) 
{
    int a = 0, b = 1, next, i;
    if (n == 0) return 0;
    for (i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() 
{
    int N, i;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("\n Fibonacci Sequence (Recursively) up to %d terms:", N);
    for (i = 0; i < N; i++) 
    {
        printf("%d ", fibonacciRecursive(i));
    }


    printf("\n %d th Fibonacci number using Recursion: %d", N, fibonacciRecursive(N - 1));
    printf("\n%d th Fibonacci number using Iteration: %d", N, fibonacciIterative(N - 1));

    printf("\n Recursive method is slower due to repeated calculations.");
    printf("\n Iterative method is faster and efficient for larger values of N.");

    return 0;
}

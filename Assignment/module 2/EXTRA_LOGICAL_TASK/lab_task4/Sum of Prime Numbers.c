#include <stdio.h>

int isPrime(int num) 
{
    if (num <= 1)
        return 0; 
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; 
    }
    return 1; 
}

int main()
{
    int N, sum = 0;

    printf("Enter a number (N): ");
    scanf("%d", &N);

    printf("\n % Prime numbers up to are", N);
    for (int i = 2; i <= N; i++) 
    {
        if (isPrime(i)) 
        {
            printf("%d ", i); 
            sum += i;          
        }
    }

    printf("\n %d Sum of all prime numbers up to", N, sum);

    return 0;
}

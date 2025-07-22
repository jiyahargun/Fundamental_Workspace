#include <stdio.h>

int main() 
{
    int n, i, flag;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n <= 1)
    {
        printf("\n %d is not a prime number", n);
    } 
    else
    {
        flag = 1; 
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0) 
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("\n %d is a prime number.", n);
        else
            printf("\n %d is not a prime number.", n);
    }

 
    printf("Prime numbers between 1 and %d are: ", n);
    for (int num = 2; num <= n; num++) 
    {
        int isPrime = 1; 
        for (int j = 2; j <= num / 2; j++) 
        {
            if (num % j == 0) 
            {
                isPrime = 0;  
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
    }
    printf("\n");

    return 0;
}

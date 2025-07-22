#include <stdio.h>

long factorial(int n)
{
    long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

long combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) 
    {
    
        for(int space = 0; space < rows - i - 1; space++)
            printf("  ");
    
        for(int j = 0; j <= i; j++)
            printf("%4ld", combination(i, j));
        printf("\n");
    }

    return 0;
}

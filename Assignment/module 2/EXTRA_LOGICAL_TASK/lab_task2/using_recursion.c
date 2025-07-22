#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    return combination(n - 1, r - 1) + combination(n - 1, r);
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
        
        printf("%4d", combination(i, j));
        printf("\n");
    }

    return 0;
}

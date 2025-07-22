#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;

    
    printf("\n Enter 5 numbers:");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    printf("\n Numbers in reverse order:");
    for(i = 4; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}

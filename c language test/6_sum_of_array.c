#include<stdio.h>
#include<conio.h>

int main() 
{
    int numbers[5];
    int sum = 0;

    printf("\n Enter 5 numbers:");
    for(int i = 0; i < 5; i++) 
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    
    printf("\n %d Sum of all numbers ", sum);

    return 0;
}

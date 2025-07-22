#include<stdio.h>

int main() 
{
    int number, start, end;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    printf("Enter the starting value of the range: ");
    scanf("%d", &start);

    printf("Enter the ending value of the range: ");
    scanf("%d", &end);

    if(start > end) 
    {
        printf("\n Invalid range! Start should be less than or equal to end.");
        return 1;
    }

    printf("\nMultiplication Table of %d from %d to %d:", number, start, end);
    for(int i = start; i <= end; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

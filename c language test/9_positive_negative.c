#include<stdio.h>
#include<conio.h>
int main() 
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 0)
    {
        printf("\n The number is positive.");
    }
    else if (number < 0) 
    {
        printf("\n The number is negative.");
    }
    else 
    {
        printf("\n The number is zero.");
    }

    return 0;
}
 
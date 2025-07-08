#include<stdio.h>
#include<conio.h> 
int main() 
{
    int num, i = 1,factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("\n Factorial is not defined for negative numbers.");
    } 
    else
    {
        while (i <= num) 
        {
            factorial *= i;
            i++;
        }

        printf("\n %d %d" , num, factorial);
    }

    return 0;
}

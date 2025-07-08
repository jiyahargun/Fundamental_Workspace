#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, c, max;

    printf("Enter first number ");
    scanf("%d", &a);
    
    printf("Enter second number ");
    scanf("%d", &b);
    
    printf("Enter three number ");
    scanf("%d", &c);

    
    if (a > b) 
    {
        if (a > c) 
        {
            max = a;
        }
        else 
        {
            max = c;
        }
    } 
    else 
    {
        if (b > c)
        {
            max = b;
        } 
        else 
        {
            max = c;
        }
    }

    // Output the result
    printf("The maximum number is: %d\n", max);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int num, digit, max = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = abs(num);

    while (num > 0)
    {
        digit = num % 10;        
        if (digit > max)
        {
            max = digit;          
        }
        num = num / 10;     
    }

    
    printf("\n %d Maximum digit is:", max);

    return 0;
}

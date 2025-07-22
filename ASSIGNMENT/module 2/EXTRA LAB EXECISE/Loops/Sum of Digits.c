#include<stdio.h>

int main()
{
    int num, digit, sum = 0, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; 

    while (num != 0)
    {
        digit = num % 10;         
        sum += digit;            
        reverse = reverse * 10 + digit;
        num /= 10;                
    }


    printf("\n %d Sum of digits of %d ", original, sum);
    printf("\n %dReversed number", reverse);

    return 0;
}

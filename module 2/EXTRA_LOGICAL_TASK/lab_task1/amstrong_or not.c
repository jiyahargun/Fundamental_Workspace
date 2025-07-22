#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) 
    {
        temp /= 10;
        n++;
    }

    temp = num;
    
    while (temp != 0) 
    {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == originalNum)
        printf("\n %d is an Armstrong number", originalNum);
    else
        printf("\n %d is not an Armstrong number", originalNum);

    return 0;
}

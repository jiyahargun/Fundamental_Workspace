#include <stdio.h>
#include <math.h>

int main() 
{
    int num, temp, remainder, n, result;

    printf("\n Armstrong numbers between 1 and 1000 are:");

    for (num = 1; num <= 1000; num++)
    {
        temp = num;
        n = 0;
        result = 0;

        int digits = num;
        while (digits != 0)
        {
            digits /= 10;
            n++;
        }

        temp = num;

        while (temp != 0) 
        {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == num)
            printf("%d\n", num);
    }

    return 0;
}

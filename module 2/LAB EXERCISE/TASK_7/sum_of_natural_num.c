#include<stdio.h>
#include<conio.h>

int main() 
{
    int n, i = 1, sum = 0;

  
    printf("\n Enter a positive number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

   
    printf("\n Sum of first %d natural numbers is: %d", n, sum);

    return 0;
}

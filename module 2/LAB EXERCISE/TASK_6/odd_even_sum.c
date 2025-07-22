#include<stdio.h>
#include<conio.h>

int main()
{
    int numbers[10];
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    printf("\n Enter 10 numbers");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 == 0) 
        {
            evenCount++;
            evenSum += numbers[i];
        }
        else
        {
            oddCount++;
            oddSum += numbers[i];
        }
    }

 
    printf("\nResults:");
    printf("\n a. Total Even Numbers: %d", evenCount);
    printf("\n b. Total Odd Numbers: %d", oddCount);
    printf("\n c. Sum of Even Numbers: %d", evenSum);
    printf("\n D. Sum of Odd Numbers: %d", oddSum);

    return 0;
}



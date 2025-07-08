#include<stdio.h>
#include<conio.h>

    int main() {
    float num1, num2;

    
    printf("\nEnter first number: ");
    scanf("%f", &num1);

    printf("\nEnter second number: ");
    scanf("%f", &num2);

    printf("\nSum: %f", num1 + num2);
    printf("\nDifference: %f", num1 - num2);
    printf("\nMultiplication: %f", num1 * num2);

    if (num2 != 0) 
    {
        printf("\nDivision: %f\n", num1 / num2);
    } 
    else 
    {
        printf("\nDivision: Error! Division by zero is not allowed.\n");
    }

    return 0;
}


#include<stdio.h>

int main() 
{
    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    if (op == '+') 
    {
        result = num1 + num2;
        printf("\n %d Result:", result);
    } 
    else if (op == '-')
    {
        result = num1 - num2;
        printf("\n %d Result", result);
    } 
    else if (op == '*')
    {
        result = num1 * num2;
        printf("\n %d Result:", result);
    } 
    else if (op == '/') 
    {
        if (num2 == 0) 
        {
            printf("\n Error: Division by zero is not allowed.");
        } 
        else
        {
            result = num1 / num2;
            printf("\n %d Result:", result);
        }
    } 
    else if (op == '%') 
    {
        if (num2 == 0) 
        {
            printf("\n Error: Modulus by zero is not allowed");
        } else {
            result = num1 % num2;
            printf("\n %d Result:", result);
        }
    } 
    else
    {
        
        printf("\n Invalid operator entered.");
    }

    return 0;
}

#include<stdio.h>
#include<conio.h>

void multiply(int a, int b)
{
    int result = a * b;
    printf("\n inside function: the result is %d",result);
}
int main()
{
    int num1 =5;
    int num2 =7;
    
    printf("\n Before function call: num1 = %d, num2 = %d", num1, num2);
     multiply(num1, num2);
     
    printf("\n After function call: num1 = %d, num2 = %d", num1, num2);
    
    return 0;
}
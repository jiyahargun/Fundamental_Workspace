#include<stdio.h>
int main()
{
    int num1, num2;
      
        printf("Enter first number: ");
        scanf("%d", &num1);
        
        printf("Enter second number: ");
        scanf("%d", &num2);
    
        printf("\n Arithmetic Operations");
        printf("\n %d",num1+num2);
        printf("\n %d",num1-num2);
        printf("\n %d",num1*num2);
        printf("\n %d",num1/num2);
        printf("\n %d",num1%num2);
        
         printf("\n Relational Operations ");
         printf("\n %d", num1 == num2);
         printf("\n %d", num1 != num2);
         printf("\n %d", num1 > num2);
         printf("\n %d", num1 < num2);
         printf("\n %d", num1 >= num2);
         printf("\n %d", num1 <= num2);
         
         printf("\n Logical Operations: ");
         printf("\n %d", num1 && num2); 
         printf("\n %d", num1 || num2); 
         printf("\n %d", !num1);      
         printf("\n %d", !num2);      

        
    return 0;
}
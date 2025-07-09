#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter your num");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("number is Even");
    }
    else
    {
        printf("number is odd");
    }
    getch();
}

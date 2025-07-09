#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    
    printf("Enter your num");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("number is postive");
    }
    else
    {
        printf("number is negative");
    }
    getch();
}

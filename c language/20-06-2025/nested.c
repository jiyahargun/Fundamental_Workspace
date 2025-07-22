#include<stdio.h>
#include<conio.h>
void main()
{
    
    int age;
    printf("Enter a your age");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("Eligible for vote");
    
    if(age>60)
    {
        printf("\n You are under Senior Citizen Category");
    }
    else
    {
        printf("\n you are under young age");
    }
    }
    else
    {
        printf("Not Eligible for vote");
    }
    getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter your age");
    scanf("%d",&age);
    
    if(age>18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("not Eligible for vote");
    }
    getch();
}

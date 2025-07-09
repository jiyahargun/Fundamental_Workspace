#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter your marks");
    scanf("%d",&marks);
    
    if(marks>40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,c;
    int choice;
    printf("\n 1.Adition \n 2.Subtraction \n 3.multiplication \n 4.division");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    switch(choice)
    {
        case 1: c=a+b;
        printf("\n Adition is %f",c);
        break;
        
        case 2: c=a-b;
        printf("\n Subtraction is %f",c);
        break;
        
        case 3: c=a*b;
        printf("\n multification is %f",c);
        break;
        
        case 4: c=a/b;
        printf("\n division is %f",c);
        break;
        
        default:
        printf("\n wrong choice");
    }
    
    getch();
}

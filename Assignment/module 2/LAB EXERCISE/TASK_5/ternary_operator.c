#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;
    int c;
    int max;
    
    printf("\n Enter first Number:");
    scanf("%d",&a);
    printf("\n Enter second Number:");
    scanf("%d",&b);
    printf("\n Enter first Number:");
    scanf("%d",&c);
    
    
    
    max = (a > b) ?
    (a > c ? a : c) : 
    (b > c ? b : c);

    printf("\n  The maximum number is: %d", max);

    return 0;
}

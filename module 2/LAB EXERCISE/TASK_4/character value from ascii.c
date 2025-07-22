#include<stdio.h>
#include<conio.h>

int main()
{
    int ascii;
    

    printf("\n Enter an ASCII (0-127) value: ");
    scanf("%d", &ascii);

    printf("\n %d is '%c' the char for ascii value  is",ascii,(char)ascii);

    return 0;
}

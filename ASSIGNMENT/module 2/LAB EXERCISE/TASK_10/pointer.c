#include<stdio.h>
#include<conio.h>

int main() 
{
    int num = 10;        
    int *ptr;             
    ptr = &num;     

    printf("\n Original value of num: %d", num);

    *ptr = 25;          

    printf("\n Modified value of num using pointer: %d", num);

    return 0;
}

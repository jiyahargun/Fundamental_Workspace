#include<stdio.h>
#include<conio.h>

int main() 
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
        {
            continue; 
        }

        if(i == 5) 
        {
            break; 
        }

        printf("\n %d", i);
    }

    return 0;
}

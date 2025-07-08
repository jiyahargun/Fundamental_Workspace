#include<stdio.h>
#include<conio.h>

int main() 
{
    int arr[5];
    int i;

    printf("\n Enter 5 integers:");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("\n Reversed array:");
    for(i = 4; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

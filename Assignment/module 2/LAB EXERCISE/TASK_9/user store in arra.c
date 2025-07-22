#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[5]; 
    int i;


    printf("\n Enter 5 numbers:");
    for(i = 0; i < 5; i++) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nStored numbers are:");
    for(i = 0; i < 5; i++) 
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }

    return 0;
}

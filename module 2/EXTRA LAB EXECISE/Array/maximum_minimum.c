#include<stdio.h>

int main() 
{
    int arr[10], i, j, temp;
    int max, min;

    printf("\n Enter 10 integers:");
    for(i = 0; i < 10; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("\n %d Maximum value", max);
    printf("\n %d Minimum value", min);

    for(i = 0; i < 9; i++) 
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(arr[j] > arr[j + 1]) 
            {
            
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray in Ascending Order:");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

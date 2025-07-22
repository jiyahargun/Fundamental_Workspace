#include<stdio.h>

void sortAscending(int arr[], int n);
void sortDescending(int arr[], int n);

int main() 
{
    int arr[100], n, i;


    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    
    printf("\n Enter %d elements:", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    sortAscending(arr, n);
    printf("Array in Ascending Order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


    sortDescending(arr, n);
    printf("\nArray in Descending Order: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


void sortAscending(int arr[], int n) 
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) 
            {
            
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to sort in descending order using bubble sort
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] < arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

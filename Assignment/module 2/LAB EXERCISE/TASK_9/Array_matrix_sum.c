#include<stdio.h>
#include<conio.h>
int main() 
{
   
    int arr[5];
    printf("\n Enter 5 integers for a one-dimensional array:");
    for (int i = 0; i < 5; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOne-Dimensional Array Elements:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    
    int matrix[3][3], sum = 0;
    printf("\n\nEnter 9 integers for a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\n3x3 Matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix = %d", sum);

    return 0;
}

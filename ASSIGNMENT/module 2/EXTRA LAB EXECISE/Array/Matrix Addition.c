#include <stdio.h>

void inputMatrix(int matrix[3][3], int size, char name)
{
    printf("\n Enter elements of Matrix %c (%dx%d):", name, size, size);
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[3][3], int size)
{
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[3][3], int B[3][3], int result[3][3], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            result[i][j] = A[i][j] + B[i][j];
}

void multiplyMatrices(int A[3][3], int B[3][3], int result[3][3], int size) 
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < size; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
}

int main() 
{
    int size;
    printf("Enter matrix size (2 or 3): ");
    scanf("%d", &size);

    if (size != 2 && size != 3) {
        printf("\n Only 2x2 or 3x3 matrices are supported.");
        return 1;
    }

    int A[3][3], B[3][3], sum[3][3], product[3][3];

    inputMatrix(A, size, 'A');
    inputMatrix(B, size, 'B');

    addMatrices(A, B, sum, size);
    printf("\nSum of matrices:");
    printMatrix(sum, size);

    if (size == 3)
    {
        multiplyMatrices(A, B, product, size);
        printf("\nProduct of matrices:");
        printMatrix(product, size);
    }

    return 0;
}

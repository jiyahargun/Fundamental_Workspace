#include <stdio.h>

int main() 
{
    int N, i;
    float sum = 0, average;

    printf("Enter the number of elements (N): ");
    scanf("%d", &N);
    int arr[N];

    printf("\n Enter %d numbers:", N);
    for(i = 0; i < N; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / N;

    printf("\n %.2f Sum of all elements =", sum);
    printf("\n %.2f Average of the elements =", average);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr;
    int i, number;
    float balance;
    char name[30], filename[100];

    printf("Enter the file name: ");
    scanf("%s", filename);  // safer than gets()

    ptr = fopen(filename, "w");
    if (ptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("\nEnter data for 3 customers:\n");
    for (i = 0; i < 3; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("Enter A/c No.: ");
        scanf("%d", &number);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Balance: ");
        scanf("%f", &balance);
        fprintf(ptr, "%d %s %.2f\n", number, name, balance);
    }

    fclose(ptr);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n\n\tNumber\t\tName\t\tBalance\n");
    while (fscanf(ptr, "%d %s %f", &number, name, &balance) == 3) {
        printf("\t%4d\t\t%-10s\t\t%6.2f\n", number, name, balance);
    }

    fclose(ptr);
    return 0;
}

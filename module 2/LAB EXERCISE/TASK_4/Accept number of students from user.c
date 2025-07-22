#include <stdio.h>

int main() {
    int students;
    int apples_per_student = 5;
    int total_apples;

   
    printf("Enter the number of students: ");
    scanf("%d", &students);

    total_apples = students * apples_per_student;

    printf("\n %d", total_apples);

    return 0;
}

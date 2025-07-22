#include <stdio.h>
#include<conio.h>
struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[3];  


    printf("\n Enter details for 3 students:");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d:", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);  
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\n Student Details");
    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d:", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d", students[i].rollNumber);
        printf("Marks: %.2f", students[i].marks);
    }

    return 0;
}

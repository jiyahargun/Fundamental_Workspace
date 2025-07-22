#include <stdio.h>

int main() 
{
    int marks;

    
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    
    if (marks > 90) 
	{
        printf("\n Grade A");
    }
    else if (marks > 75 && marks <= 90)
	 {
        printf("\n Grade B");
    }
    else if (marks > 50 && marks <= 75) 
	{
        printf("\n Grade C");
    }
    else {
        printf("\n Grade D");
    }

    return 0;
}


#include<stdio.h>
#include<conio.h>
void main()
{
    int choice;
    float base, height, length, breadth, radius, area;
    
    printf("\n 1.Triangle \n 2.Rectangle \n 3.Circle");
    printf("\n Enter your Choice(1-3):");
    scanf("%d", &choice);
    
    
    if (choice == 1)
    
    {
        
        printf("Enter base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("\n Area of triangle=%f",area);
    }
    
    
    else if (choice == 2)
    {
        
        printf("Enter length and breadth of the rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
         printf("\n Area of rectangle=%f",area);
    }
    
     else if (choice == 3) 
    {
        printf("Enter radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius;
        printf("\n Area of the circle=%f",area);
    }
    
    else
    {
        printf("invalid input");
    }
    getch();
}
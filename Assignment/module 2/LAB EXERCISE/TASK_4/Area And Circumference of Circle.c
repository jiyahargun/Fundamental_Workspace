#include<stdio.h>
int main()

{
    float radius, area, circumference;

    printf("\n Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

     printf(" \n %2f Area of the circle", area);
     printf("\n %f Circumference of the circle", circumference);
     
    return 0;
}
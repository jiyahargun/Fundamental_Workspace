#include <stdio.h>


float area_of_square(float a)
{
    return a * a;
}

float surface_area_of_cube(float a) {
    return 6 * a * a;
}


float area_of_triangle(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float side, base, height;

    
    printf("Enter side of square: ");
    scanf("%f", &side);
    printf("\n %.2f", area_of_square(side));


    printf("\nEnter side of cube: ");
    scanf("%f", &side);
    printf("%.2f\n", surface_area_of_cube(side));

    
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf(" %.2f\n", area_of_triangle(base, height));

    return 0;
}

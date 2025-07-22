#include <stdio.h>

int main()
{
    int num;

  
    printf("Enter an ASCII number (0-127): ");
    scanf("%d", &num);
    
    printf("\n %d is '%c'", num, num);

    return 0;
}

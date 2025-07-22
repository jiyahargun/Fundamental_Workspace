#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) 
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0'; 

   
    if (strcmp(str, rev) == 0) 
    {
        printf("\n The string is a palindrome.");
    } 
    else
    {
        printf("\n The string is not a palindrome.");
    }

  
    printf("\n Reversed string: %s", rev);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isPalindromeNumber(int num)
{
    int original = num, reversed = 0, remainder;
    
    while (num != 0) 
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int isPalindromeString(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) 
    {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }

    return 1;
}

int main() 
{
    int choice;

    printf("\n Check Palindrome:");
    printf("\n 1. Number");
    printf("\n 2. String");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (isPalindromeNumber(number))
            printf("\n %d is a palindrome number.", number);
        else
            printf("\n %d is not a palindrome number.", number);
    }
    else if (choice == 2) 
    {
        char str[100];
        printf("Enter a string (no spaces): ");
        scanf("%s", str);  

        if (isPalindromeString(str))
            printf("\"%s\" is a palindrome string.\n", str);
        else
            printf("\"%s\" is not a palindrome string.\n", str);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}

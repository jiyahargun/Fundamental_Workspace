#include<stdio.h>
#include<conio.h>

int main() 
{
    char str[100];
    int start = 0, end = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  
    
    while (str[end] != '\0') 
    {
        end++;
    }
    end = end - 1;
    
    while (start < end) 
    {
        if (str[start] != str[end])
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("\n The string is a palindrome.");
    else
        printf("\n The string is not a palindrome.");

    return 0;
}


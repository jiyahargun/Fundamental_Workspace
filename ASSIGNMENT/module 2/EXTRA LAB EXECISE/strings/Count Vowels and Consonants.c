#include <stdio.h>

int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];

        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        
        {
        
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (ch >= '0' && ch <= '9') 
        
        {
            digits++;
        }
        else if (ch != ' ' && ch != '\n')
        { 
            specialChars++;
        }
    }

    printf("\n %d Vowels:", vowels);
    printf("\n %d Consonants:", consonants);
    printf("\n %d Digits:", digits);
    printf("\n %d Special characters:", specialChars);

    return 0;
}

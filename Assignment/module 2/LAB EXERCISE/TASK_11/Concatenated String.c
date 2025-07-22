#include<stdio.h>
#include<conio.h>

void concatStrings(char str1[], char str2[], char result[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0') 
    {
        result[i] = str1[i];
        i++;
    }

    while (str2[j] != '\0') 
    {
        result[i] = str2[j];
        i++;
        j++;
    }
    
    result[i] = '\0';
}

int main() 
{
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    gets(str1); 
    printf("Enter second string: ");
    gets(str2);

    concatStrings(str1, str2, result);

    printf("\n Concatenated String: %s", result);

    return 0;
}


#include <stdio.h>

int getLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }
    return length;
}


void reverseString(char str[]) 
{
    int i, len = getLength(str);
    char temp;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

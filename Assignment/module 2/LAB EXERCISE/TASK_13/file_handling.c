#include<stdio.h>
#include<conio.h>

int main() 
{
    FILE *fp;
    char str[] = "Hello, this is a file handling example in C!";
    char ch;

    
    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        printf("\n Error creating file!");
        return 1;
    }

    fputs(str, fp);  
    fclose(fp);      

    fp = fopen("example.txt", "r");  
    if (fp == NULL) 
    {
        printf("\n Error opening file for reading!");
        return 1;
    }

    printf("\n Contents of the file:");
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);  
    }

    fclose(fp);  
    return 0;
}

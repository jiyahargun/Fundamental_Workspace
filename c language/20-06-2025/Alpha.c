#include<stdio.h>
#include<conio.h>
void main()
{
    char alpha;
    printf("\n Enter your character:");
    scanf("%c",&alpha);
    
    switch(alpha)
    {
        case 'A': printf("A for Apple");
        break;
        
        case 'B': printf("B for bat");
        break;
        
        case 'c': printf("c for cat");
        break;
        
        case 'D': printf("D for dog");
        break;
        
        default : printf("your character is not valid");
        break;
        
        getch();
    }
}
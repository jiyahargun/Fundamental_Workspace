#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1;
    char ch;
    
    f1 = fopen("tops","w");
    printf("\n Enter Your Data: ");
    while((ch=getchar())!='0')
    {
        putc(ch,f1);
        
    }
    fclose(f1);
    
    printf("\n Read data from file: ");
    f1=fopen("tops","r");     
    while((ch=getc(f1))!=EOF)
    {	
        printf("%c",ch);
    } 
    fclose(f1);
    
    
    return 0;
}

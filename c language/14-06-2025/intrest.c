#include<stdio.h>
#include<conio.h>
void main()
{
    
 int i,p,r,n;
 printf("\n Enter pri");
 scanf("%d" ,&p);
 
 printf("\n Enter rate of intrest");
 scanf("%d", &r);
 
 printf("\n Enter years");
 scanf("%d", &n);
 
 i= p*r*n/100;
 
  printf("\n Intrest is %d",i);
  
   getch();
}

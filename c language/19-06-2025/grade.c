#include<stdio.h>
#include<conio.h>
void main()
{
 int marks;
   
   printf("Enter Your Marks");
   scanf("%d",&marks);
   
   if(marks>80)
   {
       printf("A Grade");
   }
    if(marks>70)
   {
        printf("B Grade");
   }
    if(marks>60)
   {
        printf("C Grade");
   }
    if(marks>50)
   {
        printf("D Grade");
   }
   else
   {
        printf("Fail");
   }
    getch ();
}

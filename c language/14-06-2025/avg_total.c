#include<stdio.h>
#include<conio.h>
void main()
{
    
    int guj,hindi,eng,maths,avg,total;
   
       
       printf("\n Enter Marks for guj : ");
       scanf("%d",&guj);
       
       printf("\n Enter Marks for hindi : ");
       scanf("%d",&hindi);
     
       printf("\n Enter Marks for eng : ");
       scanf("%d",&eng);
       
       printf("\n Enter Marks for maths : ");
       scanf("%d",&maths);
   
   
       total = guj+hindi+eng+maths;
       avg = total/4;
   
       printf("Your Percentage is %d",avg);
    
       getch();
   
}

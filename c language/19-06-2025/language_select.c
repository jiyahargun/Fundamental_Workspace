#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
   
   printf("\n Enter Your Number: \n Press 1 For gujrati \n Press 2 For english \n Press 3 For hindi");
   scanf("\n %d",&num);
   

  switch(num)
  {
     case 1:
     printf("Your Selected Language is gujrati");
     break;
     
     case 2:
     printf("Your Selected Language is english");
     break;
     
     case 3:
      printf("Your Selected Language is hindi");    
      break;
      
    default:printf("Your Number is not valid");
    break;
      
  }
    
	getch();
}

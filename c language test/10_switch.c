#include<stdio.h>
#include<conio.h>

void main()
{
	int no,choice,a,b;
	float add,sub,mul,div1;
	
	printf("\n Enter Choice(1 to 4) : ");
	scanf("%d",&choice);
	printf("\n 1.addition :");
	printf("\n 2.subtraction :");
	printf("\n 3.multiplication :");
	printf("\n 4.division : ");
	
	
	printf("\n enter number 1 :");
	scanf("%d",&a);
	
	printf("\n enter number 2 :");
	scanf("%d",&b);
	
	
	switch(choice)
	{
		case 1:
			add=a+b;
			printf("\n addition is :%f",add);
			break;
		
		case 2:
			sub=a-b;
			printf("\n subtraction is :%f",sub);
			break;
			
		case 3:
			mul=a*b;
			printf("\n multiplication is :%f",mul);
			break;
			
		case 4:
			div1=a/b;
			printf("\n division is :%f",div1);
			break;
			
		default:
        printf("\n Invalid choice. Please select a number between 1 and 4.");
	}
	
	getch();
	
}
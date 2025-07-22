#include<stdio.h>
#include<conio.h>
void main()
{
	int a = 5;
	int b = 7;

	int c = a & b;
	printf("%d",c);

	int d = a | b;
	printf("%d",d);

	int e = a ^ b;
	printf("%d",e);

	int f = ~a;
	printf("%d",f);

	int g = a << b;
    printf("%d",g);

	int h = a >> b;
    printf("%d",h);
	
	getch();
}
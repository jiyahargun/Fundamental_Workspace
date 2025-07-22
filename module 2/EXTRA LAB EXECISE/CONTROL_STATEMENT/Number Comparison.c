#include <stdio.h>

int main() 
{
    int a, b, c;
    int largest, smallest;

      printf("Enter first numbers: ");
      scanf("%d", &a);
    
      printf("Enter fsecond numbers: ");
      scanf("%d", &b);
    
      printf("Enter three numbers: ");
      scanf("%d", &c);
    

    
    if (a >= b && a >= c)
	{
        largest = a;
    }
	else if (b >= a && b >= c)
	 {
        largest = b;
    } 
	else
	 {
        largest = c;
    }

    smallest = a;

    if (b < smallest)
	 {
        int temp = b;
        switch (1)
		 {
            case 1:
                smallest = temp;
                break;
        }
    }

    if (c < smallest)
	 {
        int temp = c;
        switch (1)
		 {
            case 1:
                smallest = temp;
                break;
        }
    }

    printf("\n %d Largest number: ", largest);
    printf("\n %d Smallest number: ", smallest);

    return 0;
}


#include<stdio.h>
#include<conio.h>

int main()
{
    float costPrice;
    float sellingPrice;
    float amount;

    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

   
    if(sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        printf("\n Profit = %.2f", amount);
    } 
    else if(costPrice > sellingPrice)
    {
        amount = costPrice - sellingPrice;
        printf("\n Loss = %.2f", amount);
    } 
    else
    {
        printf("\n No Profit No Loss");
    }

    return 0;
}

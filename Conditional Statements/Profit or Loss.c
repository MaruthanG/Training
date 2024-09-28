#include <stdio.h>

int main()
{
    int selling_price, cost_price;
    printf("Enter the selling price:");
    scanf("%d",&selling_price);
    printf("Enter the cost price:");
    scanf("%d",&cost_price);

    if(selling_price>cost_price){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
}
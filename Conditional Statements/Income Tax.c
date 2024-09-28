#include <stdio.h>
int main()
{
    int income,taxable_income, middle_income, high_income;
    printf("Enter the Income:");
    scanf("%d",&income);
    printf("Enter the taxable income:");
    scanf("%d",&taxable_income);
    printf("Enter the middle income:");
    scanf("%d",&middle_income);
    printf("Enter the high income:");
    scanf("%d",&high_income);

    if (income<taxable_income){
        printf("No Tax");
    }
    else if((income>=taxable_income && income<=middle_income)){
        printf("Low Tax Bracket");
    }
    else if((income>=middle_income && income<=high_income)){
        printf("Middle Tax Bracket");
    }
    else{
        printf("High Tax Bracket");
    }
}
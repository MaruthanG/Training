#include <stdio.h>
int main()
{
    int age, income, middle_income, high_income;

    printf("Enter the Age:");
    scanf("%d",&age);
    printf("Enter the Income:");
    scanf("%d",&income);
    printf("Enter the middle income:");
    scanf("%d",&middle_income);
    printf("Enter the high income:");
    scanf("%d",&high_income);

    if (age<18 || age>65){
        printf("No Retirement Savings Needed");
    }
    else if((income<middle_income)){
        printf("Low Retirement Savings Goal");
    }
    else if((income>=middle_income && income<=high_income)){
        printf("Middle Retirement Savings Goal");
    }
    else{
        printf("High Retirement Savings Goal");
    }
}
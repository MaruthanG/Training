#include <stdio.h>

int main()
{
    float basic,total;
    printf("Enter the Basic salary:");
    scanf("%f",&basic);
    if(basic<=10000){
        total=basic+(basic*0.20)+(basic*0.80);
        printf("Gross Salary : %f", total);
    }
    else if(basic<=20000){
        total=basic+(basic*0.25)+(basic*0.90);
        printf("Gross Salary : %f", total);
    }
    else{
        total=basic+(basic*0.30)+(basic*0.95);
        printf("Gross Salary : %f",total);
    }
}
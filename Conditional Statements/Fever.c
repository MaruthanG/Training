#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the Grade Percentage:");
    scanf("%f",&temp);
    if(temp>=37.5){
        printf("Fever");
    }
    else{
        printf("No Fever");
    }
}
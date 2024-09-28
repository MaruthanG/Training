#include <stdio.h>
int main()
{
    int weight;
    printf("Enter the weight:");
    scanf("%d",&weight);
    if (weight<18.5){
        printf("Underweight");
    }
    else if(weight>=18.5 && weight <=24.9){
        printf("Normal Weight");
    }
    else if(weight>=25 && weight <=29.9){
        printf("Over Weight");
    }
    else{
        printf("Obese");
    }
}
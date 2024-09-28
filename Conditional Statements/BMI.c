#include <stdio.h>
int main()
{
    float height, weight, bmi;
    printf("Enter the height:");
    scanf("%f",&height);
    printf("Enter the weight:");
    scanf("%f",&weight);
    bmi=(weight/(height*height));
    if (bmi<18.5){
        printf("Underweight");
    }
    else if(bmi>=18.5 && bmi <=24.9){
        printf("Normal Weight");
    }
    else if(bmi>=25 && bmi <=29.9){
        printf("Over Weight");
    }
    else{
        printf("Obese");
    }
    
}
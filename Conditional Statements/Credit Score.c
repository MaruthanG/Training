#include <stdio.h>
int main()
{
    int score;
    printf("Enter the Credit Score:");
    scanf("%d",&score);
    if (score<600){
        printf("Poor Credit");
    }
    else if(score>=600 && score <=699){
        printf("Fair Credit");
    }
    else if(score>=700 && score <=799){
        printf("Good Credit");
    }
    else{
        printf("Excellent Credit");
    }
    
}
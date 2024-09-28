#include <stdio.h>

int main()
{
    int unit, sum;
    printf("Enter the Unit:");
    scanf("%d",&unit);
    if(unit<=250){
        sum=((unit-250)*1.5)+220;
        printf("Electricity Bill : %d", sum+(sum*0.20));
    }
    else if(unit<=250 && unit>150){
        sum=((unit-150)*1.2)+100;
        printf("Electricity Bill : %d", sum+(sum*0.20));
    }
    else if(unit>50){
        sum=((unit-100)*0.75)+25;
        printf("Electricity Bill : %d", sum+(sum*0.20));
    }
    else{
        sum=unit*0.50;
        printf("Electricity Bill : %d", sum+(sum*0.20));
    }
}
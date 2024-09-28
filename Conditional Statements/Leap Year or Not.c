#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year:");
    scanf("%d",&year);
    if(((year%100==0)&&(year%400==0))||((year%100!=0)&&(year%4==0))){
        printf("Leap year");
    }
    else{
        printf("Not a Leap Year");
    }
}
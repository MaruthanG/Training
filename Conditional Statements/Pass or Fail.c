#include <stdio.h>

int main()
{
    int x;
    printf("Enter the Grade Percentage:");
    scanf("%d",&x);
    if(x>=60){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
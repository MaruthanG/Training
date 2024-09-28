#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the Number for X:");
    scanf("%d",&x);
     printf("Enter the Number for Y:");
    scanf("%d",&y);
    if(x>y){
        printf("X is largest %d",x);
    }
    else{
        printf("Y is largest %d",y);
    }
}
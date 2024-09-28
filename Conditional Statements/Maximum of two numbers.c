#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the Number for X:");
    scanf("%d",&x);
     printf("Enter the Number for Y:");
    scanf("%d",&y);
    if(x>y){
        printf("X is maximum %d",x);
    }
    else{
        printf("Y is maximum %d",y);
    }
}
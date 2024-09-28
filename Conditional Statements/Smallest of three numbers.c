#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the Number for X:");
    scanf("%d",&x);
    printf("Enter the Number for Y:");
    scanf("%d",&y);
    printf("Enter the Number for Z:");
    scanf("%d",&z);
    if((x<y)&&(x<z)){
        printf("X is smallest %d",x);
    }
    else if(y<z){
        printf("Y is smallest %d",y);
    }
    else{
        printf("Z is smallest %d",z);
    }
}
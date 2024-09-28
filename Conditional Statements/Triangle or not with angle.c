#include <stdio.h>

int main()
{
    int a,b,c,triangle;
    printf("Enter the triangle angle values :");
    scanf("%d%d%d",&a,&b,&c);
    triangle=a+b+c;
    if(triangle==180){
        printf("Triangle");
    }
    else{
        printf("Not a Triangle");
    }
}
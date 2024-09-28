#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the triangle side values :");
    scanf("%d%d%d",&a,&b,&c);
    if(((a+b)<c) || ((a+c)<b) || ((b+c)<a)){
        printf("Not Valid Triangle");
    }
    else{
        printf("Valid Triangle");
    }
}
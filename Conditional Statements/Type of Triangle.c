#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the triangle side values :");
    scanf("%d%d%d",&a,&b,&c);
    if((a!=b) && (b!=c)){
        printf("Scalene Triangle");
    }
    else if(a==b && b==c){
        printf("Equilateral Triangle");
    }
    else{
        printf("Isosceles Triangle");
    }
}
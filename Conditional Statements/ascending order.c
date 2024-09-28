#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the Number A:");
    scanf("%d",&a);
    printf("Enter the Number B:");
    scanf("%d",&b);
    printf("Enter the Number C:");
    scanf("%d",&c);
    if((a<b)&&(a<c)){
        printf("%d ",a);
        if(b<c){
            printf("%d %d",b,c);
        }
        else{
            printf("%d %d",c,b);
        }
    
    }
    else if((b<a)&&(b<c)){
        printf("%d ",b);
        if(a<c){
            printf("%d %d",a,c);
        }
        else{
            printf("%d %d",c,b);
        }
    }
    else{
        printf("%d ",c);
        if(b<a){
            printf("%d %d",b,a);
        }
        else{
            printf("%d %d",a,b);
        }
    }
}
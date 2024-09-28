#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Number A:");
    scanf("%d",&a);
    printf("Enter the Number B:");
    scanf("%d",&b);
    printf("Enter the Number C : ");
    scanf("%d",&c);
    if ((a!=b)&&(a!=c)&&(b!=c)) {
        if((a<b)&&(a<c)){
            printf("%d",a);
        }
        else if(b<c){
            printf("%d",b);
        }
        else{
            printf("%d",c);
        }
    }
    else if ((a==b)||(b==c)||(c==a)) {
        if((a==b)||(c==a)){
            printf("%d", a);
        }
        else{
            printf("%d", b);
        } 
    }
}
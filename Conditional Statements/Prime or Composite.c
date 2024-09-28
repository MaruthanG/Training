#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n==1||n==0||n<0){
    printf("Composite Number");
    }
    else if(n==2||n==3||n==5||n==7||n==11){
        printf("Prime Number");
    }
    else if(n%2==0||n%3==0||n%5==0||n%7==0||n%11==0){
        printf("Composite NUmber");
    }
    else{
        printf("Prime Number");
    }
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n==0){
        printf("Zero");
    }
    else if(n<0){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
}
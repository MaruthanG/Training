#include <stdio.h>

int main()
{
    char c;
    printf("Enter the value:");
    scanf("%c",&c);
    if((c-64)>=1 && (c-64)<=26){
        printf("Upper Case");
    }
    else{
        printf("Lower Case");
    }
}
#include <stdio.h>

int main()
{
    char c;
    printf("Enter the value:");
    scanf("%c",&c);
    if(((c-64)>=1 && (c-64)<=26)||((c-96)>=1 && (c-96)<=26)){
        printf("Alphabet");
    }
    else{
        printf("Not Alphabet");
    }
}
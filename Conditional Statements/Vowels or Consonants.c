#include <stdio.h>

int main()
{
    char c;
    printf("Enter the value:");
    scanf("%c",&c);
    if(((c==97) || (c==101) || (c==105) || (c==111) || (c==117) || (c==65) || (c==69) || (c==73) || (c==79) || (c==85))){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}
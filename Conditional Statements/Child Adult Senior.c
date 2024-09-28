#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Age:");
    scanf("%d",&age);
    if (age<18){
        printf("Child");
    }
    else if(age>=18 && age <=65){
        printf("Adult");
    }
    else{
        printf("Senior");
    }
    
}
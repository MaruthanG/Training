#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    float total;
    printf("Enter the Physics Mark:");
    scanf("%d",&a);
    printf("Enter the Chemistry Mark:");
    scanf("%d",&b);
    printf("Enter the  Biology Mark:");
    scanf("%d",&c);
    printf("Enter the Mathematics Mark:");
    scanf("%d",&d);
    printf("Enter the Computer Mark:");
    scanf("%d",&e);
    total = (a+b+c+d+e)/5;
    if(total>=90){
        printf("Grade A");
    }
    else if(total < 90 && total >= 80){
        printf("Grade B");
    }
        else if(total < 80 && total >= 70){
        printf("Grade C");
    }
        else if(total < 70 && total >= 60){
        printf("Grade D");
    }
        else if(total < 60 && total >= 40){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }

}
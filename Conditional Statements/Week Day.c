#include <stdio.h>

int main()
{
    int day;
    printf("Enter the day :");
    scanf("%d",&day);
    if(day==1){
        printf("Sunday");
    }
    else if(day==2){
        printf("Monday");
    }
    else if(day==3){
        printf("Tuesday");
    }
    else if(day==4){
        printf("Wednesday");
    }
    else if(day==5){
        printf("Thursday");
    }
    else if(day==6){
        printf("Friday");
    }
    else{
        printf("Saturday");
    }
}
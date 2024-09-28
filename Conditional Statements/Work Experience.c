#include <stdio.h>
int main()
{
    int age,experience;
    printf("Enter the age:");
    scanf("%d",&age);
    printf("Enter the experience:");
    scanf("%d",&experience);

    if (age<25 && experience<1){
        printf("Entry Level");
    }
    else if((age>=25 && age <=40) && (experience>=1 && experience<=5)){
        printf("Junior");
    }
    else if((age>40)&&(experience>5 && experience<=10)){
        printf("Senior");
    }
    else{
        printf("Expert");
    }
}
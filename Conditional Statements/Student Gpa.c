#include <stdio.h>

int main()
{
    float gpa;
    printf("Enter the GPA:");
    scanf("%f",&gpa);
    if(gpa<2.0){
        printf("Academic Probation");
    }
    else{
        printf("Good Standing");
    }
}
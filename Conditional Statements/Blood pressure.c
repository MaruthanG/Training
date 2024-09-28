#include <stdio.h>
int main()
{
    int systolic,diastolic;
    printf("Enter the systolic:");
    scanf("%d",&systolic);
     printf("Enter the diastolic:");
    scanf("%d",&diastolic);

    if (systolic<120 && diastolic<80){
        printf("Normal");
    }
    else if((systolic>=120 && systolic <=129)&&(diastolic<80)){
        printf("Elevated");
    }
    else if((systolic>=130 && systolic<=139)&&(diastolic>=80 && diastolic<=89)){
        printf("Stage 1 Hypertension");
    }
    else{
        printf("Stage 2 Hypertension");
    }
}
#include <stdio.h>

int main()
{
    int amount, five100, other1,two100, other2, one100, other3,fifty,other4, twenty, temp,
    ten, temp1, five, temp2, two, temp3, one;
    printf("Enter the total amount :");
    scanf("%d",&amount);
    five100=amount/500;
    other1=amount%500;
    two100=other1/200;
    other2=other1%200;
    one100=other2/100;
    other3=other2%100;
    fifty=other3/50;
    other4=other3%50;
    twenty=other4/20;
    temp=other4%20;
    ten=temp/10;
    temp1=temp%10;
    five=temp1/5;
    temp2=temp1%5;
    two=temp2/2;
    temp3=temp2%2;
    one=temp3/1;
    if(five100!=0){
        printf("\n The Count of 500 is %d", five100);
    }
    if(two100!=0){
        printf("\n The count of 200 is %d" , two100);
    }
    if(one100!=0){
        printf("\n The Count of 100 is %d", one100);
    }
    if(fifty!=0){
        printf("\n The count of 50 is %d" , fifty);
    }
    if(twenty!=0){
        printf("\n The Count of 20 is %d", twenty);
    }
    if(ten!=0){
        printf("\n The count of 10 is %d" , ten);
    }   
    if(five!=0){
        printf("\n The Count of 5 is %d", five);
    }
    if(two!=0){
        printf("\n The count of 2 is %d" , two);

    }
    if (one!=0){
        printf("\n The Count of 1 is %d", one);
    }
    
}
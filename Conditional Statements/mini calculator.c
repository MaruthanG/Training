#include <stdio.h>
#include <string.h>

int main()
{
    int a,b,result;
    char c[20];
    printf("Enter the Number A:");
    scanf("%d",&a);
    printf("Enter the Number B:");
    scanf("%d",&b);
    printf("Enter the function : ");
    scanf("%s",c);
    if (strcmp(c, "add") == 0) {
        result = a + b;
        printf("Result: %d", result);
    }
    else if (strcmp(c, "subtract") == 0) {
        result = a - b;
        printf("Result: %d", result);
    }
    else if (strcmp(c, "multiply") == 0) {
        result = a * b;
        printf("Result: %d", result);
    }
    else if (strcmp(c, "divide") == 0) {
        result = a / b;
        printf("Result: %d", result);
    }
    else{
        printf("Invalid Operation");
        
    }
}
#include <stdio.h>

int main(){

    int num1, num2;

    printf("Enter number 1: \n");
    scanf("%d", &num1);
    printf("Enter number 2: \n");
    scanf("%d", &num2);

    while(num2>0){
        num1++;
        num2--;
    }

    printf("Addition of two integers = %d", num1);

    return 0;
}
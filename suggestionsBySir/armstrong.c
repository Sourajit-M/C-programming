#include <stdio.h>

#define max_size 100;


int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num); 

    armstrong(num, num, 0);

    return 0;
}

void armstrong(int num, int n1, int sum){
    if(num==sum){
        printf("%d is a Armstrong Number", num);
    }

    if(n1 == 0){
        printf("%d is not a Armstrong Number", num);
    } 

    else{
        int d = n1 %10 ;
        armstrong(num, num/10, d*d*d);
    }
}

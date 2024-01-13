#include <stdio.h>

void armstrong(int num, int n1, int sum);
void palindrome(int num, int n1, int sum);

int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num); 

    palindrome(num, num, 0);

    return 0;
}

void armstrong(int num, int n1, int sum){
    if(num == sum){
        printf("%d is an Armstrong Number\n", num);
        return;
    }

    if(n1 == 0){
        printf("%d is not an Armstrong Number\n", num);
        return;
    } 

    else{
        int d = n1 % 10;
        armstrong(num, n1 / 10, sum + d * d * d);
    }
}

void palindrome(int num, int n1, int rev){
    if(num==rev){
        printf("%d is a Palindrome Number\n", num);
        return;
    }

    if(n1==0){
        printf("%d is not Palindrome Number", num);
        return;
    }
    else{
        int d = n1%10;
        rev = rev*10 + d;
        palindrome(num, n1/10, rev);
    }
}

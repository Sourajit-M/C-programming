#include <stdio.h>
#include <stdbool.h>

bool palin(int *num);

int main(){
    int num;
    
    printf("Enter a number:\n");
    scanf("%d", &num);

    int n1= num;

    if(palin(&num)){
        printf("%d is a Palindrome Number", n1);
    }else{
        printf("%d is not a Palindrome Number", n1);
    }
    return 0;
}
bool palin(int *num){
    int n1 =*num;
    int d, rev=0;
    while(n1!=0){
        d = n1%10;
        rev = rev*10 + d;
        n1 /= 10;
    }
    if(*num == rev){
        return true;
    }
    return false;
}
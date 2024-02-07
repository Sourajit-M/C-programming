#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int n1 = num;
    int d, flag=1;
    while(num!=0){
        d = num%10;
        if(d==0 || d==1){
            flag =1;
        }else{
            flag = 0;
            break;
        }
        num = num/10;
    }


    if(flag==1){
        printf("%d is binary\n", n1);
    }else{
        printf("%d is not binary", n1);
    }
    return 0;
}
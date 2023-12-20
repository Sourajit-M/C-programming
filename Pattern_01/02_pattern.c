#include <stdio.h>

int main() {
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5+i;j++){//for creating blank space
            printf(" ");
        }
        for(int k=1;k<=5-i;k++){//for creating the pattern on the left side
            printf("*");
        }
        for(int j=0;j<=5-i;j++){
            // for creating the pattern on the right side
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
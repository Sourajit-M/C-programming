#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    for(int i=0; i<5; i++){
        printf("%d ", ptr[i]);
    }

    // for(int i=0; i<5; i++){
    //     printf("%d ", ptr[i]);
    // }


    float *prices;

    prices = (float *)malloc(5 * sizeof(float));

    // for(int i=0; i<5; i++){
    //     printf("Enter the prices of %d item: ", (i+1));
    //     scanf("%f", &prices[i]);
    // }
    return 0;
}
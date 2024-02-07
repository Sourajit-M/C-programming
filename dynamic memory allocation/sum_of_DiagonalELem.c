#include <stdio.h>
#include <stdlib.h>
int main(){
    int size;
    printf("Enter size of the 2D array: ");
    scanf("%d", &size);
    int **ptr = (int**)calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        ptr[i] = (int*)calloc(size, sizeof(int));
    }

    int sum=0;

    printf("Enter the elements of the array:\n");

    for(int i=0; i<size; i++){
        printf("Enter elements of %d row\n", i+1);
        for(int j=0; j<size; j++){
            scanf("%d", &ptr[i][j]);
        }
    }

    for(int i=0; i<size; i++){
        sum += ptr[i][i];
        
        if(i==size-1-i){
            continue;
        }
        sum += ptr[size-1-i][i];
    }

    for(int i=0; i<size; i++){
        free(ptr[i]);
    }

    free(ptr);

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
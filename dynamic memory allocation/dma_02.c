#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size to be allocated: ");
    scanf("%d", &size);

    int *ptr = (int *)calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        ptr[i] = 2*(i+1) - 1;
        printf("%d ", ptr[i]);
    }

    printf("\n");

    free(ptr);

    printf("Enter the new size to be allocated: ");
    scanf("%d", &size);

    ptr = (int *)calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        ptr[i] = 2*(i+1);
        printf("%d ", ptr[i]);
    }

    return 0;
}
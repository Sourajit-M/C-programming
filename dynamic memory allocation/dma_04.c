#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size to be allocated: ");
    scanf("%d", &size);

    int *ptr = (int *)calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        ptr[i] = 2*(i+1) -1;
    }

    int newSize;
    printf("Enter new size to be allocated: ");
    scanf("%d", &newSize);

    ptr = realloc(ptr, newSize);

    for(int i=newSize-size-1; i< newSize; i++){
        ptr[i] = 2*(i+1);
    }

    for(int i=0; i<newSize; i++){
        printf("%d ", ptr[i]);
    }


    free(ptr);

    return 0;
}
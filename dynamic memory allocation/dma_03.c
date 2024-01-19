#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size to be allocated at first: ");
    scanf("%d", &size);

    int *ptr = (int *)calloc(size, sizeof(int));

    printf("Enter %d elements : \n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &ptr[i]);
    }

    int newSize;
    printf("Enter the new size to be allocated: ");
    scanf("%d", &newSize);

    ptr = realloc(ptr, newSize);

    printf("Enter %d elements : \n", newSize);

    for(int i=0; i<newSize; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<newSize; i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}
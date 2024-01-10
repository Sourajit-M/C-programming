#include <stdio.h>

int main(){
    //pointer to pointer

    float marks = 94.6;

    float *ptr = &marks;

    float **pptr = &ptr;

    printf("%f\n", marks);
    printf("%f\n", *ptr);
    printf("%f\n", *(&(*pptr)));

    printf("%p\n", &marks);
    printf("%p\n", ptr);
    printf("%p\n", *pptr);


    printf("%p\n", &ptr);
    printf("%p\n", pptr);
    
    printf("%p", &pptr);


    return 0;
}
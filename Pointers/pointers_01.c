#include <stdio.h>

int main(){
    int age = 19;
    int *ptr = &age;
    // int _age = *ptr;
    // printf("%d\n", _age);
    // address
    // printf("%p\n", &age);
    // printf("%p\n", ptr);
    // printf("%p\n", &ptr);
    // data
    // printf("%d\n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));


    char name[] = "Sourajit";
    char *ptr1 = &name;
    printf("%s\n", name);
    printf("%p\n", ptr1);



    return 0;
}
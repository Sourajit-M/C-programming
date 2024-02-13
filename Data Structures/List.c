#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100


typedef struct {
    int elements[MAX_SIZE];
    int size;
} LinearList;


void initialize(LinearList *list) {
    list->size = 0;
}


void add(LinearList *list, int element) {
    if (list->size < MAX_SIZE) {
        list->elements[list->size++] = element;
    } else {
        printf("List is full. Cannot add element.\n");
    }
}


void remove(LinearList *list, int element) {
    int i, found = 0;
    for (i = 0; i < list->size; i++) {
        if (list->elements[i] == element) {
            found = 1;
            break;
        }
    }
    if (found) {
        for (; i < list->size - 1; i++) {
            list->elements[i] = list->elements[i + 1];
        }
        list->size--;
    } else {
        printf("Element not found in the list.\n");
    }
}

void display(LinearList *list) {
    int i;
    for (i = 0; i < list->size; i++) {
        printf("%d ", list->elements[i]);
    }
    printf("\n");
}

int main() {
    LinearList list;
    initialize(&list);

    add(&list, 10);
    add(&list, 20);
    add(&list, 30);
    display(&list);

    remove(&list, 20);
    display(&list);

    return 0;
}

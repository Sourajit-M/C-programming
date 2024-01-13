#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

int main() {
    struct Student s1;
    struct Student* ptr = &s1;

    printf("Enter Name of Student\n");
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter the Roll Number of Student\n");
    scanf("%d", &ptr->roll_no);

    printf("Enter Branch of Student\n");
    scanf("%s", &ptr->branch);

    printf("Enter batch of Student\n");
    scanf("%d", &ptr->batch);

    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Name: %s", ptr->name);//name has another newline at end
    printf("Branch: %s\n", ptr->branch);
    printf("Batch: %d\n", ptr->batch);

    return 0;
}

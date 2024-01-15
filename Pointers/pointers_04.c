#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    int roll_no;
    char name[30];
    char branch[40];
    int batch;
};

int main() {
    // struct Student s1;
    // struct Student* ptr = &s1;

    // printf("Enter Name of Student\n");
    // fgets(ptr->name, sizeof(ptr->name), stdin);

    // printf("Enter the Roll Number of Student\n");
    // scanf("%d", &ptr->roll_no);

    // printf("Enter Branch of Student\n");
    // scanf("%s", &ptr->branch);

    // printf("Enter batch of Student\n");
    // scanf("%d", &ptr->batch);

    // printf("Roll Number: %d\n", ptr->roll_no);
    // printf("Name: %s", ptr->name);//name has another newline at end
    // printf("Branch: %s\n", ptr->branch);
    // printf("Batch: %d\n", ptr->batch);


    struct ORG org;  
    
    printf("The size of structure organisation : %ld\n",  sizeof(org)); 
    
    org.emp.employee_id = 101;   
    strcpy(org.emp.name, "Robert"); 
    org.emp.salary = 400000; 
    strcpy(org.organisation_name,  "GeeksforGeeks"); 
    strcpy(org.org_number, "GFG123768"); 
    
    

    printf("Organisation Name : %s\n",  org.organisation_name);   
    printf("Organisation Number : %s\n", org.org_number);   
    printf("Employee id : %d\n", org.emp.employee_id);   
    printf("Employee name : %s\n", org.emp.name);   
    printf("Employee Salary : %d\n", org.emp.salary);   

    return 0;
}

struct Employee 
{ 
  int employee_id; 
  char name[20]; 
  int salary; 
}; 
 
typedef struct Organisation  
{ 
  char organisation_name[20]; 
  char org_number[20];  
  struct Employee emp;  
} ORG; 
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the size of the array1: ");
    scanf("%d", &n1);
    printf("Enter the size of the array2: ");
    scanf("%d", &n2);
    
    int arr1[n1];
    int arr2[n2];
    
    printf("Enter the elements of the array 1\n");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the array 2\n");
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    
    //sort both the arrays
    
    for(int i=0; i<n1; i++){
        for(int j=0; j<n1-1-i; j++){
            if(arr1[j]>arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    
    printf("Array1 after sorting:\n");
    for(int i=0; i<n1; i++){
        printf("%d ", arr1[i]);
    }
    
    for(int i=0; i<n2; i++){
        for(int j=0; j<n2-1-i; j++){
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    
    printf("\nArray2 after sorting:\n");
    for(int i=0; i<n2; i++){
        printf("%d ", arr2[i]);
    }
    
    int c=0, c1=0, c2=0;
    int merged[n1+n2];
    while(c1<n1 && c2<n2){
        if(arr1[c1]<arr2[c2]){
            merged[c] = arr1[c1];
            c++;
            c1++;
        }else if(arr1[c1]>arr2[c2]){
            merged[c] = arr2[c2];
            c++;
            c2++;
        }else{
            merged[c] = arr1[c1];
            c++;
            c1++;
        }
    }

    //if any elements are left to be added
    while(c1<n1){
        merged[c] = arr1[c1];
        c1++;
        c++;
    }

    while(c2<n2){
        merged[c] = arr2[c2];
        c++;
        c2++;
    }
    
    printf("\nMerged array\n");
    for(int i=0; i<n1+n2; i++){
        printf("%d ", merged[i]);
    }

    return 0;
}
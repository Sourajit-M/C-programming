#include <stdio.h>

int main() {
    int arr[] = { 4, 2, 4, 5, 2, 3, 1, 6, 5 };

    int len = sizeof(arr)/sizeof(arr[0]);
    
//sort the array
    for(int i=0; i<len; i++){
        for(int j=0; j<len-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
        
    int count = 0;
        
    int elem = arr[0];
    for(int i=1; i<len; i++){
        if(elem == arr[i]){//duplicate element
            count++;
        }else{
            elem = arr[i];
        }
    }
    
    printf("Number of duplicates is %d", count);
    return 0;
}

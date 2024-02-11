#include <stdio.h>
#include <limits.h>

int main(){

    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};

    int max = -1;
    int len = sizeof(arr)/sizeof(arr[0]);
    int sec_Large = -1;

    // for(int i=0; i<len; i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    // }

    // for(int i=0; i<len; i++){
    //     if(sec_Large<arr[i] && arr[i]<max){
    //         sec_Large = arr[i];
    //     }
    // }

    

    for(int i=0; i<len; i++){
        if(arr[i]>max){
            sec_Large = max;
            max = arr[i];
        }else if(arr[i]>sec_Large && sec_Large<max){
            sec_Large = arr[i];
        }
    }

    printf("Second Largest Element in a array is : %d ", sec_Large);


    return 0;
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the array:");
    scanf("%d", &n);

    int arr[n][n];
    printf("enter elements of the array\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        scanf("%d", &arr[i][j]);
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i][i]);
        if(i==n-1-i)
        continue;
        printf("%d ", arr[n-1-i][i]);
    }
    return 0;
}
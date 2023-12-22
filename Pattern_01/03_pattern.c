#include <stdio.h>

int main(){
    /*
 * * * * *
 *        *
 *        *
 *        *
 * * * * * 
 */

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);


    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         if(i==1 || i==5){
    //             printf("* ");
    //         }
    //         else if(j==1 || j==5){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }

    //     printf("\n");
    // }



    /*

      **********
      ****  ****
      ***    ***
      **      **
      *        *
      *        *
      **      **
      ***    ***
      ****  ****
      **********
    
    
    */

   for(int i=0; i<2*n; i++){
    if(i < n){
        for(int j=0; j<n-i; j++){
            printf("*");
            }

        for(int k=0; k<i; k++){
            printf(" ");
        }

        for(int m=0; m<i; m++){
            printf(" ");
        }

        for(int p=0; p<n-i; p++){
            printf("*");
        }

        
    }else{
        for(int j=0; j<i-n+1; j++){
            printf("*");
            }

        for(int k=n; k>i-n+1; k--){
            printf(" ");
        }

        for(int m=n; m>i-n+1; m--){
            printf(" ");
        }

        for(int p=0; p<i-n+1; p++){
            printf("*");
        }

    }
    printf("\n");
    }
     

return 0;
}
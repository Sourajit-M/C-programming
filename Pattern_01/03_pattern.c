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

    /*
    think every pattern as matrix to determine its positions
    and accordingly arrange the conditions
    */


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
    if(i < n){//upper part
        for(int j=0; j<n-i; j++){ //left pattern
            printf("*");
            }

        for(int k=0; k<i; k++){ //left spaces
            printf(" ");
        }

        for(int m=0; m<i; m++){// right space
            printf(" ");
        }

        for(int p=0; p<n-i; p++){ // right spaces
            printf("*");
        }

        
    }else{//lower part
        for(int j=0; j<i-n+1; j++){//left pattern
            printf("*");
            }

        for(int k=n; k>i-n+1; k--){//left spaces
            printf(" ");
        }

        for(int m=n; m>i-n+1; m--){//right spaces
            printf(" ");
        }

        for(int p=0; p<i-n+1; p++){//right pattern
            printf("*");
        }

    }
    printf("\n");
    }


    printf("\n");

    /*
    
       *   *
      * * * *
     *   *   *
    
    */


    for(int i=0; i<n; i++){
        int spaces = 1;
        for(int j=0; j<3*n; j++){
            if(i == 0){
                if(j==2 || j==6){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else if(i == 1){
                if(j==1 || j==n || j==5 || j==7){
                    printf("*");
                }else{
                    printf(" ");
                }
            }else{
                if(j==0 || j==4 || j==8){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            
        }
        printf("\n");
    }


     

return 0;
}
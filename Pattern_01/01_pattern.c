#include <stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    int a=1;

    /*
    
    1
    23
    456
    78910

    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    
    */


   /*

        *
       **
      ***
     ****
    *****


     for (int i = 1; i <=n; i++)
    {

        for(int j=1; j<=n-i; j++){
            printf(" ");
        }

        for(int k=1; k<=i; k++){
            printf("*");
        }

        printf("\n");
    }
  


   */

    /*
    

    *********
     *******
      *****
       ***
        *

   for (int i=0; i<n; i++)
   {

        for(int j=1; j<=i; j++){
            printf(" ");
        }

        for(int k=1; k<=2*n - 2*i -1; k++){
            printf("*");
        }
        printf("\n");
   }

   */

    for(int i=0; i<n; i++){

        
        for(int j=1; j<=i; j++){
            printf(" ");
        }

        for(int k=1; k<=n-i; k++){
            printf("*");
        }

        for(int p=1; p<=n-i-1; p++){
            printf("*");
        }

        printf("\n");
    }
   

 

   
    return 0;
}
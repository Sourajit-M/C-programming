#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100


int main() {
    char string[MAX_SIZE];
    char ch;
    int count;
    
    
    printf("Enter characters and press 'q' to quit : \n");
    
    while(true){
        scanf(" %c", &ch);
        
        if(ch=='q' || count>=MAX_SIZE-1){
            break;
        }
        
        printf("Entered character: %c\n", ch);
        string[count] = ch;
        count++;
    }
    
    printf("\nCharacters entered before quitting:\n");
    for (int i = 0; i < count; i++) {
        printf("%c ", string[i]);
    }

    return 0;
}
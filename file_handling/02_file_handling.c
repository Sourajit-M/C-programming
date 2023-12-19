#include <stdio.h>

int main() {
    FILE *fileptr;
    char content[1000];

    fileptr = fopen("01_test.txt", "r");

    if (fileptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }//if file cannot be detected

    // Reading content from the file
    fgets(content, sizeof(content), fileptr);

    // Displaying the content read from the file
    printf("Content from the file:\n%s\n", content);

    // Closing the file
    fclose(fileptr);

    return 0;
}

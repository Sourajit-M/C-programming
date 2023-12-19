#include <stdio.h>

int main() {
    FILE *fileptr; // File pointer declaration

    fileptr = fopen("01_test.txt", "w");

    if (fileptr == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Writing content into the file
    fprintf(fileptr, "Hello, this is some content written into the file.");

    // Closing the file
    fclose(fileptr);

    printf("File created, written, and closed successfully.\n");

    return 0;
}

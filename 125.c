//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
int main() {
    FILE *file;
    char fileName[100];
    char newLine[256];
    printf("Enter the file name to append text: ");
    scanf("%s", fileName);
    file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a new line of text to append: ");
    getchar(); // Clear the newline character from the input buffer
    fgets(newLine, sizeof(newLine), stdin);
    fputs(newLine, file);
    fclose(file);
    printf("Text appended to %s successfully.\n", fileName);
    return 0;
}
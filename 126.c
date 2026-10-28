//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
int main() {
    FILE *file;
    char fileName[100];
    char line[256];
    printf("Enter the file name to read: ");
    scanf("%s", fileName);
    file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", fileName);
        return 1;
    }
    printf("Contents of %s:\n", fileName);
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
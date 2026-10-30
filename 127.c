//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;
    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    fclose(file);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
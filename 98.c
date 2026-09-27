//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ')) {
            printf("%c", name[i]);
        }
    }

    // Find the last space to print the surname in full
    int lastSpaceIndex = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    if (lastSpaceIndex != -1) {
        printf(" ");
        for (int i = lastSpaceIndex + 1; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}
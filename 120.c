//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i]) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A');
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + ('a' - 'A');
            }
        }
        i++;
    }
    printf("Sentence case: %s\n", str);
    return 0;
}
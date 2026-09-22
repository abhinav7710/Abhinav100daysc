//Q85: Reverse a string.
#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("%s", s);
    return 0;
}
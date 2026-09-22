//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = 0, is_palindrome = 1;
    while (s[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}
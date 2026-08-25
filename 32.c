//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n, original, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if (original == reverse) {
        printf("The number is a palindrome.");
    } else {
        printf("The number is not a palindrome.");
    }
    return 0;
}
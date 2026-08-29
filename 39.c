//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int n, digit;
    int product = 1;
    int found = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product = product * digit;
            found = 1;
        }
        n = n / 10;
    }
    if (found)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digit found");
    return 0;
}
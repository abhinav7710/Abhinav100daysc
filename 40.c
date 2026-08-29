//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long n, temp, power = 1;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    temp = n;
    while (temp >= 10) {
        power = power * 10;
        temp = temp / 10;
    }
    printf("1's complement = ");
    while (power > 0) {
        digit = n / power;
        n = n % power;
        if (digit == 0)
            printf("1");
        else
            printf("0");
        power = power / 10;
    }
    return 0;
}
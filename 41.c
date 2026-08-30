//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int n, first, last, temp, power, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    power = 1;
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    result = n - first * power - last;
    result = result + last * power + first;

    printf("Number after swapping first and last digit = %d", result);
    return 0;
}
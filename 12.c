//12: Write a program Qto input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
 if (n >= 0) {
        if (n == 0) {
            printf("Zero");
        } else {
            printf("Positive number");
        }
    } else {
        printf("Negative number");
    }
 return 0;
}
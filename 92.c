//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient;

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Sum: %.2f\n", sum);
        printf("Difference: %.2f\n", difference);
        printf("Product: %.2f\n", product);
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}
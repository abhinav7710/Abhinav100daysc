//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int a;
    int b;
    int sum;
    int difference;
    int product;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
sum = a + b;
 difference = a - b;
product = a * b;
 if (b != 0) {
        quotient = (float)a / b;
        printf("The sum of both numbers is: %d\n", sum);
        printf("The difference of both numbers is: %d\n", difference);
        printf("The product of both numbers is: %d\n", product);
        printf("The quotient of both numbers is: %.2f\n", quotient);
    } else {
        printf("The sum of both numbers is: %d\n", sum);
        printf("The difference of both numbers is: %d\n", difference);
        printf("The product of both numbers is: %d\n", product);
        printf("Division by 0 is not valid");
    }

    return 0;
}
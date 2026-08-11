//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    int radius;
    float area; 
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle is: %.2f\n", area = 3.14 * radius * radius);
    printf("The circumference of the circle is: %.2f\n", 2 * 3.14 * radius);
return 0;
}
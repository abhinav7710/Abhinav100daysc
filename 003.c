//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int length;
    int width;  
    int area;   
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);   
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    printf("The area of the rectangle is: %d\n", area = length * width);
    printf("The perimeter of the rectangle is: %d\n", 2 * (length + width));
    return 0;
}

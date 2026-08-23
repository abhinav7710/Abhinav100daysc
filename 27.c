//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main() {
    int n, sum = 0, odd = 1;
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
    sum = sum + odd;
    odd = odd + 2;
}
printf("%d", sum);
return 0;
}
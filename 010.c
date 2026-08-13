//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int seconds, hours, minutes, sec;
printf("Enter time in seconds: ");
scanf("%d", &seconds);

hours = seconds / 3600;
 seconds = seconds % 3600;
minutes = seconds / 60;
sec = seconds % 60;
  printf("Time = %02d:%02d:%02d", hours, minutes, sec);
    return 0;
}
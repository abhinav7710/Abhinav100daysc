//Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};
int main() {
    enum Month month;
    int days;
    printf("Enter a month (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            days = 31;
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            days = 30;
            break;
        case FEB:
            days = 28; // or 29 in a leap year
            break;
        default:
            printf("Invalid month!\n");
            return 1;
    }

    printf("The month has %d days.\n", days);
    return 0;
}
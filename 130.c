//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_number;
    float marks;
};
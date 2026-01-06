#include <stdio.h>

int main() {
    char name[50], section[10];
    int roll;
    float gpa;
    printf("Enter Name, Roll Number, Section and GPA: ");
    scanf("%s %d %s %f", name, &roll, section, &gpa);
    printf("Student Info:\n");
    printf("Name: %s\nRoll Number: %d\nSection: %s\nGPA: %.2f\n", name, roll, section, gpa);
    return 0;
}

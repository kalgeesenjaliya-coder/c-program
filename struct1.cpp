#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    char address[100];
};

int main()
{
    struct Student s;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter address: ");
    scanf(" %[^\n]", s.address);

    printf("\nStudent Details\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Address: %s\n", s.address);

    return 0;
}
#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    char address[100];
};

int main()
{
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter address: ");
        scanf(" %[^\n]", s[i].address);
    }

    printf("\n----- Student Details -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNo);
        printf("Address: %s\n", s[i].address);
    }

    return 0;
}
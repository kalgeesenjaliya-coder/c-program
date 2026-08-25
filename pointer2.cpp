#include <stdio.h>

struct Student
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct Student s = {101, "Kalgee", 85.5};
    struct Student *ptr;

    ptr = &s;

    printf("Student Details:\n");
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
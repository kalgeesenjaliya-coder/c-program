#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    char major[50];
    char minor[50];
};

int main() {
    struct Student students[10];
    int i, searchRoll, found = 0;

    // Input data for 10 students
    for (i = 0; i < 10; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Major subject:");
        scanf("%s", students[i].major);

        printf("Minor Subject:");
        scanf("%s", students[i].minor);
    }


    printf("\nList of all students:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", students[i].name);
    }

    printf("\nEnter roll number to see details: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < 10; i++) {
        if (students[i].rollNo == searchRoll) {
            printf("\nStudent Details:\n");
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Name: %s\n", students[i].name);
            printf("Major: %s\n", students[i].major);
            printf("Minor: %s\n", students[i].minor);
            found = 1;
            break;
        }

    }

    if (!found) {
        printf("\nNo student found with that roll number.\n");
    }

    return 0;
}


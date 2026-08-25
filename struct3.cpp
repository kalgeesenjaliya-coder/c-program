#include <stdio.h>

struct Employee
{
    int employeeID;
    float salary;
    char employeeName[50];
};

struct Organization
{
    char organizationName[50];
    int organizationID;
    struct Employee employee[2];
};

int main()
{
    struct Organization org[2];
    int i, j;

    for(i = 0; i < 2; i++)
    {
        printf("\nEnter details of Organization %d\n", i + 1);

        printf("Enter organization name: ");
        scanf(" %[^\n]", org[i].organizationName);

        printf("Enter organization ID: ");
        scanf("%d", &org[i].organizationID);

        for(j = 0; j < 2; j++)
        {
            printf("\nEnter details of Employee %d\n", j + 1);

            printf("Enter employee name: ");
            scanf(" %[^\n]", org[i].employee[j].employeeName);

            printf("Enter employee ID: ");
            scanf("%d", &org[i].employee[j].employeeID);

            printf("Enter employee salary: ");
            scanf("%f", &org[i].employee[j].salary);
        }
    }

    printf("\n========== Organization Details ==========\n");

    for(i = 0; i < 2; i++)
    {
        printf("\nOrganization %d\n", i + 1);
        printf("Organization Name: %s\n", org[i].organizationName);
        printf("Organization ID: %d\n", org[i].organizationID);

        for(j = 0; j < 2; j++)
        {
            printf("\nEmployee %d\n", j + 1);
            printf("Employee Name: %s\n", org[i].employee[j].employeeName);
            printf("Employee ID: %d\n", org[i].employee[j].employeeID);
            printf("Employee Salary: %.2f\n", org[i].employee[j].salary);
        }
    }

    return 0;
}
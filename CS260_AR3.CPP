#include <stdio.h>
int main() {
    int a[5], i, j, temp, choice;
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter 1 for ascending or 2 for descending: ");
    scanf("%d", &choice);

    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if ((choice == 1 && a[i] > a[j]) || (choice == 2 && a[i] < a[j])) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted values:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

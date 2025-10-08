#include <stdio.h>
int main() {
    int amount, notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};

    printf("Enter amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount -= count[i] * notes[i];
        }
    }

    printf("Minimum number of notes:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] != 0)
            printf("%d x %d\n", notes[i], count[i]);
    }
    return 0;
}

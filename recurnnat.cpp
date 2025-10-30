#include <stdio.h>

void printNatural(int n) {
    if (n == 0)
        return; // base case
    printNatural(n - 1); // recursive call
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d\n", &n);

    printf("First %d natural numbers:\n", n);
    printNatural(n);

    return 0;
}

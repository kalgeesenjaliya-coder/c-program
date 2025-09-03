#include <stdio.h>
int main() {
    int i, n, num, sum=0;
    float mean;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for(i=1; i<=n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    mean = sum/(float)n;
    printf("Sum = %d\nMean = %.2f", sum, mean);
    return 0;
}

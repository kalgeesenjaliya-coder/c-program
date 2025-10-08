#include <stdio.h>
int main() {
    long n;
    printf("Enter number: ");
    if(scanf("%ld", &n)!=1) return 0;
    int sign = (n < 0) ? -1 : 1;
    if(n < 0) n = -n;
    long rev = 0;
    while(n > 0) { rev = rev * 10 + (n % 10); n /= 10; }
    printf("Reversed = %ld\n", rev * sign);
    return 0;
}

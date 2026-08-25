#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr[3];
    int arr[3] = {10, 20, 30};
    int (*p)[3];

    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    printf("Array of Pointers:\n");
    printf("Value of a = %d\n", *ptr[0]);
    printf("Value of b = %d\n", *ptr[1]);
    printf("Value of c = %d\n", *ptr[2]);

    p = &arr;

    printf("\nPointer to Array:\n");
    printf("arr[0] = %d\n", (*p)[0]);
    printf("arr[1] = %d\n", (*p)[1]);
    printf("arr[2] = %d\n", (*p)[2]);

    return 0;
}
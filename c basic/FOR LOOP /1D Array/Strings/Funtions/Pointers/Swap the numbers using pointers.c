#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1, *p2, temp;

    p1 = &a;
    p2 = &b;

    printf("Before Swap:\n");
    printf("a = %d\n", *p1);
    printf("b = %d\n", *p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

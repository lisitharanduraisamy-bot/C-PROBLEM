#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Before swap:\n");
    scanf("%d %d %d", &a, &b, &c);

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("After swap:\n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}

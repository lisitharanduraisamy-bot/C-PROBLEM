#include <stdio.h>

int main() {
    int num, temp, hasZero = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        if (temp % 10 == 0) {
            hasZero = 1;
            break;
        }
        temp /= 10;
    }

    if (hasZero)
        printf("%d is a Duck Number.", num);
    else
        printf("%d is Not a Duck Number.", num);

    return 0;
}

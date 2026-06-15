#include <stdio.h>

int main() {
    int n, digit;
    int total = 0, odd = 0, even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        total++;

        if (digit % 2 == 0)
            even++;
        else
            odd++;

        n = n / 10;
    }

    printf("Total Digits = %d\n", total);
    printf("Odd Digits   = %d\n", odd);
    printf("Even Digits  = %d\n", even);

    return 0;
}

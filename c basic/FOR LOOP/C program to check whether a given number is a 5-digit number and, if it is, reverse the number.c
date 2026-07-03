#include <stdio.h>

int main() {
    int num, original, reverse = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if (num >= 10000 && num <= 99999) {
        original = num;

        while (num != 0) {
            reverse = reverse * 10 + (num % 10);
            num = num / 10;
        }

        printf("Reversed number = %d\n", reverse);
    } else {
        printf("The entered number is not a 5-digit number.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int correctPin = 1234;
    int enteredPin;
    int attempts = 3;

    printf("===== PIN VERIFICATION SYSTEM =====\n");

    while (attempts > 0) {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("\n PIN Verified Successfully!\n");
            printf(" Access Granted.\n");
            return 0;
        } else {
            attempts--;
            if (attempts > 0) {
                printf(" Incorrect PIN! Attempts Left: %d\n", attempts);
            } else {
                printf("\n Account Locked!\n");
                printf(" Too many incorrect attempts.\n");
            }
        }
    }

    return 0;
}

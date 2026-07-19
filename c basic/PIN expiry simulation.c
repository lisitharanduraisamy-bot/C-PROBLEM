#include <stdio.h>

int main() {
    int pin = 1234;
    int enteredPin, newPin;
    int attempts = 3;
    int pinExpired;

    printf("========== PIN VERIFICATION SYSTEM ==========\n");

    // Simulate PIN expiry
    printf("Has the PIN expired?\n");
    printf("Enter 1 for Yes, 0 for No: ");
    scanf("%d", &pinExpired);

    if (pinExpired == 1) {
        printf("\nYour PIN has expired.\n");
        printf("Create a new 4-digit PIN: ");
        scanf("%d", &newPin);

        pin = newPin;

        printf("PIN updated successfully!\n");
        printf("Please log in with your new PIN.\n\n");
    }

    while (attempts > 0) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("\nPIN Verified Successfully!\n");
            printf("Access Granted.\n");
            return 0;
        } else {
            attempts--;

            if (attempts > 0) {
                printf("Incorrect PIN! Attempts Left: %d\n\n", attempts);
            } else {
                printf("\nAccount Locked!\n");
                printf("Too many incorrect attempts.\n");
            }
        }
    }

    return 0;
}

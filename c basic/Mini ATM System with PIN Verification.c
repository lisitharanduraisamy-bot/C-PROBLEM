#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, newPin;
    int attempts = 0, choice;
    float balance = 5000.00, amount;

    printf("=================================\n");
    printf("       MINI ATM SYSTEM\n");
    printf("=================================\n");

    while (attempts < 3) {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("\nLogin Successful!\n");

            do {
                printf("\n========== ATM MENU ==========\n");
                printf("1. Check Balance\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Change PIN\n");
                printf("5. Exit\n");
                printf("==============================\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {

                case 1:
                    printf("Current Balance: Rs. %.2f\n", balance);
                    break;

                case 2:
                    printf("Enter amount to deposit: Rs. ");
                    scanf("%f", &amount);

                    if (amount > 0) {
                        balance += amount;
                        printf("Deposit Successful!\n");
                        printf("Updated Balance: Rs. %.2f\n", balance);
                    } else {
                        printf("Invalid Amount!\n");
                    }
                    break;

                case 3:
                    printf("Enter amount to withdraw: Rs. ");
                    scanf("%f", &amount);

                    if (amount <= 0) {
                        printf("Invalid Amount!\n");
                    } else if (amount > balance) {
                        printf("Insufficient Balance!\n");
                    } else {
                        balance -= amount;
                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance: Rs. %.2f\n", balance);
                    }
                    break;

                case 4:
                    printf("Enter New 4-digit PIN: ");
                    scanf("%d", &newPin);

                    if (newPin >= 1000 && newPin <= 9999) {
                        pin = newPin;
                        printf("PIN Changed Successfully!\n");
                    } else {
                        printf("PIN must be a 4-digit number!\n");
                    }
                    break;

                case 5:
                    printf("Thank you for using our ATM!\n");
                    break;

                default:
                    printf("Invalid Choice!\n");
                }

            } while (choice != 5);

            return 0;
        } else {
            attempts++;
            printf("Incorrect PIN! Attempts Left: %d\n", 3 - attempts);
        }
    }

    printf("\nYour account has been blocked due to 3 incorrect PIN attempts.\n");

    return 0;
}

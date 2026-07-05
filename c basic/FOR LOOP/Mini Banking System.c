#include <stdio.h>

char name[50];
int accNo;
float balance = 0;

void createAccount()
{
    printf("\n--- Create Account ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Initial Deposit: ");
    scanf("%f", &balance);

    printf("\nAccount Created Successfully!\n");
}

void displayAccount()
{
    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", accNo);
    printf("Account Holder : %s\n", name);
    printf("Balance         : %.2f\n", balance);
}

void deposit()
{
    float amount;

    printf("\nEnter Deposit Amount: ");
    scanf("%f", &amount);

    if(amount > 0)
    {
        balance += amount;
        printf("Amount Deposited Successfully.\n");
    }
    else
    {
        printf("Invalid Amount!\n");
    }
}

void withdraw()
{
    float amount;

    printf("\nEnter Withdrawal Amount: ");
    scanf("%f", &amount);

    if(amount <= balance && amount > 0)
    {
        balance -= amount;
        printf("Withdrawal Successful.\n");
    }
    else
    {
        printf("Insufficient Balance or Invalid Amount!\n");
    }
}

void checkBalance()
{
    printf("\nCurrent Balance: %.2f\n", balance);
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n===== MINI BANKING SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Display Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Check Balance\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccount();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                checkBalance();
                break;

            case 6:
                printf("\nThank You for Using Mini Banking System!\n");
                return 0;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int amount;
    int n500, n200, n100, n50;

    printf("Enter amount: ");
    scanf("%d", &amount);

    n500 = amount / 500;
    amount = amount % 500;

    n200 = amount / 200;
    amount = amount % 200;

    n100 = amount / 100;
    amount = amount % 100;

    n50 = amount / 50;
    amount = amount % 50;

    printf("\n500 Notes = %d", n500);
    printf("\n200 Notes = %d", n200);
    printf("\n100 Notes = %d", n100);
    printf("\n50 Notes = %d", n50);
    printf("\nRemaining Amount = %d", amount);

    return 0;
}

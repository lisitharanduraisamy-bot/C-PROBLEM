#include <stdio.h>

int main() {
    int n, i;
    float price, total = 0, discount, finalBill;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    discount = total * 0.20;
    finalBill = total - discount;

    printf("\nTotal Bill      : %.2f", total);
    printf("\n20%% Discount   : %.2f", discount);
    printf("\nFinal Bill      : %.2f\n", finalBill);

    return 0;
}

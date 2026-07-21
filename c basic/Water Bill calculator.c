#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("===== Water Bill Calculator =====\n");

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 1.50;
    } 
    else if (units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    } 
    else {
        bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    }

    printf("\nWater Units Consumed : %d", units);
    printf("\nTotal Water Bill     : ₹%.2f\n", bill);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, amount, ci;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest (%%): ");
    scanf("%f", &r);

    printf("Enter Time (Years): ");
    scanf("%f", &t);

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("\nCompound Interest = %.2f", ci);
    printf("\nTotal Amount = %.2f\n", amount);

    return 0;
}

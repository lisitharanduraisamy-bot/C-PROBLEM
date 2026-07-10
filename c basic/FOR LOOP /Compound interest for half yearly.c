#include <stdio.h>
#include <math.h>

int main() {
    float p, r, ci, amount;
    int t;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%d", &t);

    amount = p * pow((1 + r / 200), 2 * t);
    ci = amount - p;

    printf("Compound Interest = %.2f\n", ci);
    printf("Amount = %.2f\n", amount);

    return 0;
}

#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi < 24.9)
        printf("Normal");
    else if (bmi < 29.9)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}

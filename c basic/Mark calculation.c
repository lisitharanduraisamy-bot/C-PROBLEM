#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    int total;
    float avg;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    avg = total / 5.0;

    // Check fail condition
    if (s1 < 35 || s2 < 35 || s3 < 35 || s4 < 35 || s5 < 35) {
        printf("Result: FAIL\n");
    } else {
        printf("Result: PASS\n");

        // Grade classification
        if (avg >= 75) {
            printf("Grade: Distinction\n");
        }
        else if (avg >= 60) {
            printf("Grade: First Class\n");
        }
        else if (avg >= 50) {
            printf("Grade: Second Class\n");
        }
        else {
            printf("Grade: Pass Class\n");
        }
    }

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}

#include <stdio.h>

int main() {
    int n, marks[20], i;
    int total = 0, highest, lowest;
    float average;

    printf("===== Student Performance Analyzer =====\n");

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Invalid number of subjects!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];

        if (i == 0) {
            highest = lowest = marks[i];
        } else {
            if (marks[i] > highest)
                highest = marks[i];
            if (marks[i] < lowest)
                lowest = marks[i];
        }
    }

    average = (float)total / n;

    printf("\n===== Report =====\n");
    printf("Total Marks : %d\n", total);
    printf("Average     : %.2f\n", average);
    printf("Highest     : %d\n", highest);
    printf("Lowest      : %d\n", lowest);

    if (average >= 90)
        printf("Grade       : A+\n");
    else if (average >= 80)
        printf("Grade       : A\n");
    else if (average >= 70)
        printf("Grade       : B\n");
    else if (average >= 60)
        printf("Grade       : C\n");
    else if (average >= 50)
        printf("Grade       : D\n");
    else
        printf("Grade       : F\n");

    if (average >= 85 && lowest >= 60)
        printf("Scholarship : Eligible\n");
    else
        printf("Scholarship : Not Eligible\n");

    return 0;
}

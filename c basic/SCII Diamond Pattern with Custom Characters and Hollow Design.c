#include <stdio.h>

int main() {
    int n, i, j;
    char ch;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    printf("Enter a symbol: ");
    scanf(" %c", &ch);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    int mid = n / 2;

    for (i = 0; i < n; i++) {

        int spaces = (i <= mid) ? (mid - i) : (i - mid);
        int width  = n - 2 * spaces;

        for (j = 0; j < spaces; j++)
            printf(" ");

        for (j = 0; j < width; j++) {
            if (j == 0 || j == width - 1 || width == 1)
                printf("%c", ch);
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = i;

        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num += n - j;
        }

        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    int oddCount = 0, evenCount = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    printf("Number of odd factors = %d\n", oddCount);
    printf("Number of even factors = %d\n", evenCount);

    return 0;
}

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 2 == 0)
            printf("Positive Even\n");
        else
            printf("Positive Odd\n");
    } else if (n < 0) {
        if (n % 2 == 0)
            printf("Negative Even\n");
        else
            printf("Negative Odd\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}

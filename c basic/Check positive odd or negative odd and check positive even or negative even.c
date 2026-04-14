#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0) {
        if (n % 2 == 0)
            printf("Positive Even");
        else
            printf("Positive Odd");
    } else {
        if (n % 2 == 0)
            printf("Negative Even");
        else
            printf("Negative Odd");
    }

    return 0;
}

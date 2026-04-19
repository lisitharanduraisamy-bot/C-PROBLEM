#include <stdio.h>

int main() {
    int n, original, remainder, result = 0;

    scanf("%d", &n);
    original = n;

    while(n != 0) {
        remainder = n % 10;
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if(result == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}

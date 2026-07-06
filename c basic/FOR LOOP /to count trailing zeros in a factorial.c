#include <stdio.h>

int main() {
    long long int num;
    printf("Enter a Number: ");
    scanf("%lld", &num);

    long long int count = 0;

    while (num >= 5) {
        num = num / 5;
        count = count + num;
    }

    printf("Number of Trailing Zeros = %lld", count);

    return 0;
}

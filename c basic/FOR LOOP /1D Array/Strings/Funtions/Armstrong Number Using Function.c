#include <stdio.h>
#include <math.h>
void armstrong(num,original) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum= sum + pow(digit, 3);
        num = num / 10;
    }
    if (sum == original) {
        printf("Armstrong number");
    }else {
        printf("Not armstrong number");
    }
}

int main() {

    int num;
    scanf("%d",&num);
    int original;
    original = num;
    armstrong(num,original);

    return 0;
}


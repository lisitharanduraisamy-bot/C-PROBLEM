#include <stdio.h>

int fact(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int num, org, rem, sum = 0;
    scanf("%d", &num);
    org = num;

    while(num > 0) {
        rem = num % 10;
        sum += fact(rem);
        num /= 10;
    }

    if(sum == org)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}

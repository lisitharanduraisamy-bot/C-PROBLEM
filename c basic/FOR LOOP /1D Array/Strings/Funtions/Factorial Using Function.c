#include <stdio.h>

void factorial(a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact = fact * i;
    }
    printf("%d",fact);
}

int main() {

    int num;
    scanf("%d",&num);
    factorial(num);

    return 0;
}


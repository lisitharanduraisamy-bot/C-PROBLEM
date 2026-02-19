#include <stdio.h>

void prime(a) {
    int prime=1;
    for (int i = 2; i < a/2; i++) {
        if (a % i == 0) {
            prime = 0;
            break;
        }
    }
    if (prime == 1) {
        printf("Prime\n");
    }else {
        printf("Not Prime\n");
    }
}

int main() {

    int num;
    scanf("%d",&num);
    prime(num);

    return 0;
}


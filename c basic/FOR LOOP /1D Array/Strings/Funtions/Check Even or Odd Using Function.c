#include <stdio.h>

void check(a) {
    if (a%2==0) {
        printf("Even");
    }else {
        printf("Odd");
    }
}

int main() {

    int n1;
    scanf("%d",&n1);
    check(n1);

    return 0;
}


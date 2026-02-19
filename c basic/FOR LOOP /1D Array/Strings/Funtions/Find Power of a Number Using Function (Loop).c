#include <stdio.h>

void power(num,pow) {
    int power=1;
    for (int i=1;i<=pow;i++) {
        power=power*num;
    }
    printf("%d",power);
}

int main() {

    int num,pow;
    scanf("%d",&num);
    scanf("%d",&pow);
    power(num,pow);

    return 0;
}


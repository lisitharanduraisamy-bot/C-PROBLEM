#include <stdio.h>

void gcd(n1,n2) {
    while (n1 != n2) {
        if (n1 > n2) {
            n1=n1-n2;
        }else {
            n2=n2-n1;
        }
    }
    printf("%d",n1);
}

int main() {

    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    gcd(n1,n2);

    return 0;
}


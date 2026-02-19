#include <stdio.h>

void rev(a) {
    int rev;
    while(a!=0) {
        int digit = a%10;
        rev = rev*10 + digit;
        a /= 10;
    }
    printf("%d", rev);
}

int main() {

    int num;
    scanf("%d",&num);
    rev(num);

    return 0;
}


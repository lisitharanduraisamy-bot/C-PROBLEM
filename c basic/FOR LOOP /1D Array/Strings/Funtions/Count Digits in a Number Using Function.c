#include <stdio.h>

void rev(a) {
    int count=0;
    while (a!=0) {
        int digit = a%10;
        count++;
        a=a/10;
    }
    printf("%d",count);
}

int main() {

    int num;

    scanf("%d",&num);
    rev(num);

    return 0;
}


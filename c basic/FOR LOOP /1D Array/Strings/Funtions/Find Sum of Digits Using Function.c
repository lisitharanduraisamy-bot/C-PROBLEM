#include <stdio.h>

void sum(a) {
    int sum=0;
    while(a!=0) {
        int digit = a%10;
        sum=sum+digit;
        a=a/10;
    }
    printf("%d",sum);
}

int main() {

    int num;
    scanf("%d",&num);
    sum(num);

    return 0;
}


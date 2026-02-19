#include <stdio.h>

void rev(a) {
    int sum=0;
    for (int i=1;i<=a;i++) {
        sum=sum+i;
    }
    printf("%d",sum);
}

int main() {

    int num;

    scanf("%d",&num);
    rev(num);

    return 0;
}


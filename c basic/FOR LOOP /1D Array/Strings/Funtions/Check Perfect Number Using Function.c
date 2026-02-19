#include <stdio.h>

void perfect(num) {
    int sum=0;
    for (int i=1; i<=num/2; i++) {
        if (num%i==0) {
            sum=sum+i;
        }
    }
    if (sum==num) {
        printf("Perfect Number");
    }else {
        printf("Not Perfect Number");
    }
}

int main() {

    int num;
    scanf("%d",&num);
    perfect(num);

    return 0;
}


#include <stdio.h>

void compound_interest(p,r,s) {
    float amount;
    amount=((float)p*r*s)/(float)100;
    printf("%.2f",amount);
}

int main() {

    int p,r,s;
    scanf("%d %d %d",&p,&r,&s);
    compound_interest(p,r,s);

    return 0;
}


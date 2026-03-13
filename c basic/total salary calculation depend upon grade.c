#include <stdio.h>

int main() {
    char grade;
    int basic;

    scanf("%c", &grade);
    scanf("%d", &basic);

    int a,b,c;

    a = basic*20/100;
    b = basic*50/100;
    c = basic*11/100;

    if(grade=='A') {
        printf("%d", basic + a + b + 1700 - c);
    }
    else if(grade=='B') {
        printf("%d", basic + a + b + 1500 - c);
    }
    else if(grade=='C') {
        printf("%d", basic + a + b + 1300 - c);
    }
    else if(grade=='D') {
        printf("%d", basic + a + b + 1100 - c);
    }
    else {
        printf("%d", basic + a + b + 900 - c);
    }

    return 0;
}

#include <stdio.h>

void rev(a,original) {
    int rev;
    while(a!=0) {
        int digit = a%10;
        rev = rev*10 + digit;
        a /= 10;
    }
    if(rev==original) {
        printf("Palindrome");
    }else {
        printf("Not Palindrome");
    }
}

int main() {

    int num;

    scanf("%d",&num);
    int original;
    original=num;
    rev(num,original);

    return 0;
}


#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isStrong(int num) {
    int temp = num, sum = 0, rem;
    while(temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }
    return sum == num;
}

int isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }
    return sum == num;
}

int isArmstrong(int num) {
    int temp = num, rem, sum = 0;
    while(temp > 0) {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return sum == num;
}

int isPalindrome(int num) {
    int temp = num, rev = 0, rem;
    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return rev == num;
}

int sumOfDivisors(int num) {
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }
    return sum;
}

int isAmicable(int a, int b) {
    return (sumOfDivisors(a) == b && sumOfDivisors(b) == a);
}

int main() {
    int num, a, b;

    scanf("%d", &num);

    if(isStrong(num))
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    if(isPerfect(num))
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");

    if(isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    if(isPalindrome(num))
        printf("Palindrome Number\n");
    else
        printf("Not Palindrome Number\n");

    scanf("%d %d", &a, &b);

    if(isAmicable(a, b))
        printf("Amicable Numbers\n");
    else
        printf("Not Amicable Numbers\n");

    return 0;
}

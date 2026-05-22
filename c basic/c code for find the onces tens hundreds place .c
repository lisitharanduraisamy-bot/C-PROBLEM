#include <stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    int ones=num%10;
    int tens=(num/10)%10;
    int hundreds=(num/100)%10;

    printf("Ones place : %d\n",ones);
    printf("Tens place : %d\n",tens);
    printf("Hundreds place : %d\n",hundreds);

    return 0;
}

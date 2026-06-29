#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 10 == 5)
        printf("Ends with 5");
    else
        printf("Does not end with 5");

    return 0;
}

#include <stdio.h>

int main() {

    int initial_cash;
    int number_of_withdrawals;
    scanf("%d", &initial_cash);
    scanf("%d", &number_of_withdrawals);
    int arr[number_of_withdrawals];
    for (int i = 0; i < number_of_withdrawals; i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    int count=0;
    for (int i = 0; i < number_of_withdrawals; i++) {
        sum=initial_cash-arr[i]-sum;
        if (sum<5000) {
            count++;
        }
    }
    int add=0;
    for (int i = 0; i < number_of_withdrawals; i++) {
        add=add+arr[i];
    }
    int remaining_cash;
    remaining_cash=initial_cash-add;
    printf("Remaining Cash: %d\n", remaining_cash);
    printf("Risk Count: %d",count);

    return 0;
}

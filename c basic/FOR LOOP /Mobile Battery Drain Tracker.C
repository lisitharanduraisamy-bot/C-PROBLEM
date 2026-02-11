#include <stdio.h>

int main() {

    int battery_percent;
    int number_of_hours;
    scanf("%d", &battery_percent);
    scanf("%d", &number_of_hours);
    int arr[number_of_hours];

    for (int i = 0; i < number_of_hours; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_hours; i++) {
        sum=sum+arr[i];
    }
    int remaining_battery;
    remaining_battery=battery_percent-sum;
    printf("Remaining battery: %d", remaining_battery);

    return 0;
}

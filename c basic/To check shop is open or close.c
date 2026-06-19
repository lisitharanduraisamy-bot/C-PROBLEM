#include <stdio.h>

int main() {
    int openTime, closeTime, currentTime;

    printf("Enter shop opening time (24-hour format): ");
    scanf("%d", &openTime);

    printf("Enter shop closing time (24-hour format): ");
    scanf("%d", &closeTime);

    printf("Enter current time (24-hour format): ");
    scanf("%d", &currentTime);

    if (currentTime >= openTime && currentTime < closeTime)
        printf("Shop is OPEN\n");
    else
        printf("Shop is CLOSED\n");

    return 0;
}

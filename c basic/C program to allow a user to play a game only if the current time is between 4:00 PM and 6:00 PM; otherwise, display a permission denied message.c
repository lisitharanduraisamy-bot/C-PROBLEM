#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter current time (HH MM in 24-hour format): ");
    scanf("%d %d", &hour, &minute);

    if ((hour == 16) || (hour == 17) || (hour == 18 && minute == 0)) {
        printf("Permission Granted! You can play the game.\n");
    } else {
        printf("Permission Denied! You can only play between 4:00 PM and 6:00 PM.\n");
    }

    return 0;
}

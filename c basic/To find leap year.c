#include <stdio.h>
int main() {
    int year = 2000;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("Leap Year");
            else
                printf("Not Leap Year");
        } else
            printf("Leap Year");
    } else
        printf("Not Leap Year");

    return 0;
}

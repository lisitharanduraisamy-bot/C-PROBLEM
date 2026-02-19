#include <stdio.h>

void leap(year) {
    if (year%4==0 && year%100!=0) {
        printf("Leap Year");
    }else {
        printf("Not Leap Year");
    }
}

int main() {

    int year;
    scanf("%d",&year);
    leap(year);

    return 0;
}


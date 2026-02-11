#include <stdio.h>

int main() {

    int number_of_days;
    scanf("%d", &number_of_days);
    int arr[number_of_days];
    for (int i = 0; i < number_of_days; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_days; i++) {
        sum=sum+arr[i];
    }
    int count=0;
    for (int i = 0; i < number_of_days; i++) {
        if (arr[i]>50) {
            count++;
        }
    }
    printf("Total Rainfall: %d\n", sum);
    printf("Heavy Rainfall Days: %d",count);

    return 0;
}

#include <stdio.h>

int main() {

    int number_of_passengers;
    scanf("%d", &number_of_passengers);
    int arr[number_of_passengers];
    for (int i = 0; i < number_of_passengers; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_passengers; i++) {
        sum=sum+arr[i];
    }
    printf("Total Collection: %d", sum);

    return 0;
}

#include <stdio.h>

int main() {

    int number_of_units;
    scanf("%d", &number_of_units);
    int arr[number_of_units];
    for (int i = 0; i < number_of_units; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_units; i++) {
        sum=sum+arr[i];
    }
    int count=0;
    for (int i = 0; i < number_of_units; i++) {
        if (arr[i]>100) {
            count++;
        }
    }
    printf("Total Loss: %d\n", sum);
    printf("High Loss Days: %d",count);

    return 0;
}

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]<220) {
            count++;
        }
    }
    int min;
    min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("Minimum Voltage: %d\n", min);
    printf("Low Voltage Events: %d", count);

    return 0;
}

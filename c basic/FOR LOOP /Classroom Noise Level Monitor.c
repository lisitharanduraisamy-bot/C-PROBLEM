#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max;
    max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]>70) {
            count++;
        }
    }
    printf("Maximum Noise: %d\n",max);
    printf("Noisy Periods: %d",count);

    return 0;
}

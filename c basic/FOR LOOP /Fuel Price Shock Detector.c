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
        if (arr[i]>100) {
            count++;
        }
    }
    int max;
    max=arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Highest Price: %d\n", max);
    printf("Highest Price Days: %d", count);

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int positive;
    positive=arr[0]*arr[1];
    int negative;
    negative=arr[n-1]*arr[n-2];
    if ((arr[0] && arr[1]) > 0) {
        positive=arr[0]*arr[1];
    }if ((arr[n-1] && arr[n-2]) < 0) {
        negative=arr[n-1]*arr[n-2];
    }
    if (positive > negative) {
        printf("%d", positive);
    }else {
        printf("%d", negative);
    }

    return 0;
}

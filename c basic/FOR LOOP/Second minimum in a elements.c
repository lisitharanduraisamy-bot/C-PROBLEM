#include <stdio.h>

int main() {
    int arr[] = {12, 5, 8, 1, 3};
    int n = 5;

    int min1 = arr[0];
    int min2 = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("Second smallest element: %d", min2);

    return 0;
}

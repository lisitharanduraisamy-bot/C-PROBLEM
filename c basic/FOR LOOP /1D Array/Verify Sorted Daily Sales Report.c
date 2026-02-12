#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int increasing = 1;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i + 1]) {
            increasing = 0;
        }
    }
    if (increasing == 1) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}

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
        if (arr[i]>50000) {
            count++;
        }
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    printf("Total Revenue: %d\n", sum);
    printf("Target Days: %d", count);

    return 0;
}

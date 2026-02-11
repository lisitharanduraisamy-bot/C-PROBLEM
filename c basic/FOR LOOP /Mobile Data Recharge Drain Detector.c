#include <stdio.h>

int main() {

    int total_data;
    int n;
    scanf("%d", &total_data);
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    int remaining;
    remaining = total_data - sum;
    printf("Remaining Data: %d\n", remaining);
    int count = 0;
    int add=0;
    for (int i = 0; i < n; i++) {
        add = add + arr[i];
        if (add<=total_data) {
            count++;
        }
    }
    printf("Successful Days: %d",count);

    return 0;
}

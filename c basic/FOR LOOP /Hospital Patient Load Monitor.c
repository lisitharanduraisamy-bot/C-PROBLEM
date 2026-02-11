#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    int count=0;
    for (int i = 0; i < n; i++) {
        if (arr[i]>100) {
            count++;
        }
    }

    printf("Total Patients: %d\n", sum);
    printf("Overcrowded Days: %d",count);

    return 0;
}

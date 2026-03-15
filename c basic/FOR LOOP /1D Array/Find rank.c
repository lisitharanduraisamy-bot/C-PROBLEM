#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], rank[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        rank[i] = 1;   // initialize rank as 1
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] > arr[i]) {
                rank[i]++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", rank[i]);
    }

    return 0;
}

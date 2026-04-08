#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int arr[n], count[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = -1;
    }

    for(i = 0; i < n; i++) {
        if(count[i] == -1) {
            int c = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    c++;
                    count[j] = 0;
                }
            }
            count[i] = c;
        }
    }

    for(i = 0; i < n; i++) {
        if(count[i] != 0)
            printf("%d -> %d\n", arr[i], count[i]);
    }

    return 0;
}

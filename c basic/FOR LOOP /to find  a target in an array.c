#include <stdio.h>
#include <string.h>

void found(int *arr, int n,int target) {
    for (int i = 1; i <= n; i++) {
        if (arr[i] == target) {
            printf("%d",i);
            return;
        }
    }
    printf("-1");
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    found(arr,n,target);
    return 0;
}

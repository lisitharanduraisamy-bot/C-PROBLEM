#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int found=0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i]+arr[j] == target) {
                printf("%d %d\n",arr[i],arr[j]);
                found=1;
                break;
            }
        }
    }
    if (found==1) {
        printf("Pair");
    }else {
        printf("No Pair");
    }


    return 0;
}

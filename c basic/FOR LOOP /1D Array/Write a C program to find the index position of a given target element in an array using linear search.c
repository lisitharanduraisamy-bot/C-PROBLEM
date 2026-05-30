#include <stdio.h>

int main() {
    int n, target, found = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("Target found at index %d\n", found);
    } else {
        printf("Target not found\n");
    }

    return 0;
}

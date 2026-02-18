#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1];
    int arr1[n];
    arr1[0]=arr[n-1];
    int idx=1;
    for (int i=n-2; i>=0; i--) {
        if (arr[i]>max) {
            arr1[idx++]=arr[i];
            max=arr[i];
        }
    }
    for (int i=idx-1; i>=0; i--) {
        printf("%d ",arr1[i]);
    }

    return 0;
}


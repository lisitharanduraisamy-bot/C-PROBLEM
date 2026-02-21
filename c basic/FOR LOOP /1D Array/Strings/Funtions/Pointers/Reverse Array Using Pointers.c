#include <stdio.h>

void sum(int *arr,int size) {

    int left=0,right=size-1;
    while(left<right) {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for (int i=0;i<size;i++) {
        printf("%d ",*(arr+i));
    }
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    sum(arr,size);

    return 0;
}

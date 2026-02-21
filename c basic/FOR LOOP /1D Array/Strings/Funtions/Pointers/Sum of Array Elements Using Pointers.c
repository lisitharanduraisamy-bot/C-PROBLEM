#include <stdio.h>

void sum(int arr[],int size) {
    int *p=arr;
    int sum=0;
    for(int i=0;i<size;i++) {
        sum=sum+*(p+i);
    }
    printf("%d\n",sum);
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

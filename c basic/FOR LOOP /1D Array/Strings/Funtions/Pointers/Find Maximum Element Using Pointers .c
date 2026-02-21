#include <stdio.h>
void maximum(int arr[],int size) {
    int max = arr[0];
    for(int i=0;i<size;i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    printf("%d",max);
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    maximum(arr,size);

    return 0;
}

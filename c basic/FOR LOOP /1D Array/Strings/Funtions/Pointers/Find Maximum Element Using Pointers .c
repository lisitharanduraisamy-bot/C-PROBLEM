#include <stdio.h>
void maximum(int *p,int size) {
    int max = *p;
    for(int i=0;i<size;i++) {
        if(*(p+i)>max) {
            max = *(p+i);
        }
    }
    printf("%d",max);
}

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int *p=arr;
    for (int i = 0; i < size; i++) {
        scanf("%d", &*(p+i));
    }
    maximum(p,size);

    return 0;
}

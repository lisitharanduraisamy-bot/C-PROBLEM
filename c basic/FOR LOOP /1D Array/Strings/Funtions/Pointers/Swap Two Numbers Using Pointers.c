#include <stdio.h>

void swap(int *a, int *b) {
    printf("Before Swap: %d %d\n",*a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After Swap: %d %d",*a,*b);
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);

    return 0;
}

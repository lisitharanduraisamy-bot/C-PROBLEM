#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int add=0;
    for (int i = 1; i <= num; i++) {
        add = add + i;
    }
    int sum=0;
    for (int i = 0; i < num; i++) {
        sum=sum+arr[i];
    }
    int missing;
    missing = add - sum;
    printf("%d", missing);

    return 0;
}

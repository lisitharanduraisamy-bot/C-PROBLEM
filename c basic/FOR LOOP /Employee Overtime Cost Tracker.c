#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum=sum+arr[i];
    }
    int add=0;
    for (int i = 0; i < sum; i++) {
        add=add+200;
    }
    int count=0;
    for (int i = 0; i < n; i++) {
        if (arr[i]>3) {
            count++;
        }
    }
    printf("Total Overtime Hours: %d\n",sum);
    printf("Overtime Cost: %d\n",add);
    printf("Heavy Overtime Days: %d",count);

    return 0;
}

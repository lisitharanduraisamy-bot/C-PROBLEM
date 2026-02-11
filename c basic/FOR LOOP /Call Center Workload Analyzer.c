#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    printf("Total calls: %d\n",sum);
    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]>40) {
            count++;
        }
    }
    printf("Overloaded Hours: %d",count);

    return 0;
}

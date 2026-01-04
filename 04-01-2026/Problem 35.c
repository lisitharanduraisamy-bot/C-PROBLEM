#include <stdio.h>
int main() {
    int n,i,num=0;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}

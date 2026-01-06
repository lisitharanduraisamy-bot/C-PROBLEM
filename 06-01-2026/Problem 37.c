#include <stdio.h>
int main() {
    int n,i,size,x=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&size);     
        for(i=0;i<n;i++){
        if(arr[i]==size){
            x=1;
            break;
        }
    }
    if(x)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {

    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    int maxindex=0;
    int minindex=0;

    
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minindex=i;
        }
    }
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
            maxindex=j;
        }
    }
    if(maxindex>minindex){
        printf("\n\nMaximum Profit : %d",max-min);
    }else{
        printf("\n\n0");
    }

       
    return 0;
    }

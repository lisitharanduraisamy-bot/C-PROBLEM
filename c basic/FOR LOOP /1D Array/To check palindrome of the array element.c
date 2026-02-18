#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int palindrome=0;
    int left,right;
    left=arr[0];
    right=arr[n-1];
        while(left!=right) {
            if(arr[left]==arr[right]) {
                palindrome=1;
            }
            left++;
            right--;
        }
    if(palindrome==0) {
        printf("Palindrome");
    }else {
        printf("Not a Palindrome");
    }

    return 0;
}


#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int palindrome=1;
    int left,right;
    left=0;
    right=n-1;
        while(left!=right) {
            if(arr[left]!=arr[right]) {
                palindrome=0;
            }
            left++;
            right--;
        }
    if(palindrome==1) {
        printf("Palindrome");
    }else {
        printf("Not a Palindrome");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    char str[500];
    char reversed[500];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int left=0;
    int right=strlen(str) - 1;
    int palindrome=1;
    while(left<right) {
        if (str[left]!=str[right]) {
            palindrome=0;
            break;
        }
        left++;
        right--;
    }
    if (palindrome==1) {
        printf("Palindrome");
    }else {
        printf("Not Palindrome");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void palidrome(char *str) {
    int palidrome=1;
    int left=0,right=strlen(str)-1;
    while(left<right) {
        if (str[left] != str[right]) {
            palidrome=0;
            break;
        }
        left++;
        right--;
    }
    if (palidrome==1) {
        printf("Palidrome");
    }else {
        printf("Not Palidrome");
    }
}

int main() {
    char str[100];
    scanf("%s",str);
    palidrome(str);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {

    char str[500];
    char revered[500];
    fgets(str,sizeof(str),stdin);
    int left=0;
    int right=strlen(str) - 1;
    while(left<right) {
        int temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
    printf("%s\n",str);

    return 0;
}

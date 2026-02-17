#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    fgets(str, 100, stdin);
    int count=0;
    int count1=0;
    for (int i=0;str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;
        }if (str[i] >= 'A' && str[i] <= 'Z') {
            count1++;
        }
    }
    printf("Uppercase: %d\n",count1);
    printf("Lowercase: %d\n",count);

    return 0;
}


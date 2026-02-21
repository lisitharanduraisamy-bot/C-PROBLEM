#include <stdio.h>
#include <string.h>

void space(char *str) {
    int count=1;
    while (*str != '\0') {
        if (*str == '\n') {
            *str = '\0';
        }
        if (*str == ' ') {
            count++;
        }
        str++;
    }
    printf("%d\n",count);
}

int main() {
    char str[500];
    fgets(str,500,stdin);
    space(str);

    return 0;
}

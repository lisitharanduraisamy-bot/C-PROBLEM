#include <stdio.h>
#include <string.h>
void copy(char *p) {
    int str1[500];
    strcpy(str1,p);
    printf("%s\n", str1);
}

int main() {
    char str[500];
    fgets(str,sizeof(str),stdin);
    copy(str);

    return 0;
}

#include <stdio.h>
void vowel(char *p) {
    int count = 0;
    while (*p!='\0') {
        if (*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u') {
            count++;
        }
        p++;
    }
    printf("%d",count);
}

int main() {
    char str[500];
    fgets(str,sizeof(str),stdin);
    vowel(str);


    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}

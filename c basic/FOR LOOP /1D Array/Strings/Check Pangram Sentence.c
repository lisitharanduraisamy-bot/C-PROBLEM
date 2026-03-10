#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            int duplicate = 0;
            for (int j = 0; j < i; j++) {
                if (str[i] == str[j]) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate == 0) {
                count++;
            }
        }
    }
    if (count == 26) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}

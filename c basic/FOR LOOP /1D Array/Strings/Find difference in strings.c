#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int count[26] = {0};
    int max = 0, min = 1000;

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    for(int i = 0; i < 26; i++) {
        if(count[i] > 0) {
            if(count[i] > max)
                max = count[i];
            if(count[i] < min)
                min = count[i];
        }
    }

    printf("%d", max - min);

    return 0;
}

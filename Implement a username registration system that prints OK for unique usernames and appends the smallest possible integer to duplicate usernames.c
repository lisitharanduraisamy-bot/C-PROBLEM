
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char names[100005][40];
    int count[100005] = {0};

    for (int i = 0; i < n; i++) {
        char s[40];
        scanf("%s", s);

        int found = 0;

        for (int j = 0; j < i; j++) {
            if (strcmp(names[j], s) == 0) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("OK\n");
            strcpy(names[i], s);
        } else {
            int k = 1;
            char newName[40];

            while (1) {
                sprintf(newName, "%s%d", s, k);
                int exists = 0;

                for (int j = 0; j < i; j++) {
                    if (strcmp(names[j], newName) == 0) {
                        exists = 1;
                        break;
                    }
                }

                if (!exists)
                    break;

                k++;
            }

            printf("%s\n", newName);
            strcpy(names[i], newName);
        }
    }

    return 0;
}

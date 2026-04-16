#include <stdio.h>

int main() {
    char name[50];
    scanf("%s", name);

    if (name[0] != '\0')
        printf("Hi %s, welcome to our college\n", name);
    else
        printf("No name entered\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    int length, size;

    printf("Enter password length: ");
    scanf("%d", &length);

    size = sizeof(chars) - 1;

    srand(time(NULL));

    printf("\nGenerated Password: ");

    for (int i = 0; i < length; i++) {
        printf("%c", chars[rand() % size]);
    }

    printf("\n");

    return 0;
}

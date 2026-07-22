#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@gmail.com";

    printf("Enter your Gmail ID: ");
    scanf("%99s", email);

    int lenEmail = strlen(email);
    int lenDomain = strlen(domain);

    if (lenEmail > lenDomain &&
        strcmp(email + lenEmail - lenDomain, domain) == 0) {
        printf("Gmail Verified Successfully!\n");
    } else {
        printf("Invalid Gmail Address!\n");
    }

    return 0;
}

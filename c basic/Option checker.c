#include <stdio.h>

int main() {
    int option;

    printf("===== OPTION CHECKER =====\n");
    printf("1. Say Hello\n");
    printf("2. Display Your Name\n");
    printf("3. Exit\n");
    printf("Enter your option: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Hello!\n");
            break;

        case 2:
            printf("My Name is Lisitharan.\n");
            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Option!\n");
    }

    return 0;
}

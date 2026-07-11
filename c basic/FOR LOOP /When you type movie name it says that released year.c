#include <stdio.h>
#include <string.h>

int main() {
    char movie[50];

    printf("Enter Movie Name: ");
    fgets(movie, sizeof(movie), stdin);
    movie[strcspn(movie, "\n")] = '\0';

    if (strcmp(movie, "Leo") == 0)
        printf("This movie was released in 2023.");
    else if (strcmp(movie, "Master") == 0)
        printf("This movie was released in 2021.");
    else if (strcmp(movie, "Vikram") == 0)
        printf("This movie was released in 2022.");
    else if (strcmp(movie, "Jailer") == 0)
        printf("This movie was released in 2023.");
    else
        printf("Movie not found.");

    return 0;
}

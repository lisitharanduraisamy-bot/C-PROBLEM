#include <stdio.h>
#include <string.h>

int main() {
    char mood[20];

    printf("===== Mood Based Quote Generator =====\n");
    printf("Enter your mood (happy, sad, angry, tired, excited): ");
    scanf("%19s", mood);

    if (strcmp(mood, "happy") == 0)
        printf("\nQuote: Keep smiling! Your happiness is contagious.\n");

    else if (strcmp(mood, "sad") == 0)
        printf("\nQuote: Tough times never last, but tough people do.\n");

    else if (strcmp(mood, "angry") == 0)
        printf("\nQuote: Take a deep breath. Peace begins with patience.\n");

    else if (strcmp(mood, "tired") == 0)
        printf("\nQuote: Rest if you must, but never quit.\n");

    else if (strcmp(mood, "excited") == 0)
        printf("\nQuote: Great things happen when passion meets action!\n");

    else
        printf("\nQuote: Every day is a new opportunity to grow.\n");

    return 0;
}

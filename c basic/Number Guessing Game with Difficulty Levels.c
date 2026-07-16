#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int difficulty;
    int maxNumber, maxAttempts;
    int randomNumber, guess;
    char playAgain;

    srand(time(0));

    do {
        printf("\n=====================================\n");
        printf("      NUMBER GUESSING GAME\n");
        printf("=====================================\n");

        printf("Select Difficulty Level:\n");
        printf("1. Easy   (1 - 50, 10 Attempts)\n");
        printf("2. Medium (1 - 100, 7 Attempts)\n");
        printf("3. Hard   (1 - 500, 5 Attempts)\n");
        printf("Enter your choice: ");
        scanf("%d", &difficulty);

        switch (difficulty) {
            case 1:
                maxNumber = 50;
                maxAttempts = 10;
                break;
            case 2:
                maxNumber = 100;
                maxAttempts = 7;
                break;
            case 3:
                maxNumber = 500;
                maxAttempts = 5;
                break;
            default:
                printf("Invalid choice! Defaulting to Easy.\n");
                maxNumber = 50;
                maxAttempts = 10;
        }

        randomNumber = rand() % maxNumber + 1;

        printf("\nGuess the number between 1 and %d\n", maxNumber);

        int won = 0;

        for (int attempt = 1; attempt <= maxAttempts; attempt++) {
            printf("\nAttempt %d/%d: ", attempt, maxAttempts);
            scanf("%d", &guess);

            if (guess == randomNumber) {
                printf("\nCongratulations! You guessed the correct number in %d attempt(s).\n", attempt);
                won = 1;
                break;
            } else if (guess < randomNumber) {
                printf("Too Low!\n");
            } else {
                printf("Too High!\n");
            }

            printf("Remaining Attempts: %d\n", maxAttempts - attempt);
        }

        if (!won) {
            printf("\nGame Over!\n");
            printf("The correct number was: %d\n", randomNumber);
        }

        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'Y' || playAgain == 'y');

    printf("\nThank you for playing!\n");

    return 0;
}

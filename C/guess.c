#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

void clearInputBuffer() {
    while (getchar() != '\n');
}

int getValidGuess() {
    int guess;
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1 || guess < 1 || guess > 100) {
            printf("Invalid input. Please enter a number between 1 and 100.\n");
            clearInputBuffer();
        } else {
            clearInputBuffer();
            return guess;
        }
    }
}

int main() {
    int secretNumber, guess, attempts;
    char repeat;

    srand(time(0));

    do {
        secretNumber = rand() % 100 + 1;
        attempts = 10;

        printf("I have selected a number between 1 and 100.\n");
        printf("You have %d attempts to guess the number.\n", attempts);

        do {
            guess = getValidGuess();
            attempts--;
            int currentAttempt = 10 - attempts;

            if (guess < secretNumber) {
                printf("Too low! Try again.\n");
            } else if (guess > secretNumber) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", currentAttempt);
                break;
            }
        } while (attempts > 0);

        if (attempts == 0) {
            printf("Sorry, you've used all your attempts. The number was %d.\n", secretNumber);
        }

        // Ask the user if they want to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &repeat); // Note the space before %c to consume the newline character
        clearInputBuffer();
        printf("---------------------------------\n");

        // Validate the input for replay
        while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N') {
            printf("Invalid input. Please enter 'y' to play again or 'n' to quit: ");
            scanf(" %c", &repeat);
            clearInputBuffer();
        }

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

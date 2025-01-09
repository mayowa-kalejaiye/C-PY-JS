#include <stdio.h>

/**
 * Demonstrates the use of different types of loops:
 * 1. for loop
 * 2. while loop
 * 3. do-while loop
 */
void forLoop() {
    // for loop
    // Prints numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d", i);
    }
    printf("\n");

    // while loop
    // Prints numbers from 1 to 5
    int j = 1;
    while (j <= 5) {
        printf("%d", j);
        j++;
    }
    printf("\n");

    // do-while loop
    // Prints numbers from 1 to 5
    int k = 1;
    do {
        printf("%d", k);
        k++;
    } while (k <= 5);
    printf("\n");
}

/**
 * Demonstrates the use of nested loops.
 * The outer loop runs 2 times, and the inner loop runs 3 times for each iteration of the outer loop.
 */
void nestedLoop() {
    int i, j;

    // Outer loop
    for (i = 1; i <= 2; ++i) {
        printf("Outer: %d\n", i); // Executes 2 times

        // Inner loop
        for (j = 1; j <= 3; ++j) {
            printf(" Inner: %d\n", j); // Executes 6 times (2 * 3)
        }
    }
}

/**
 * Main function to demonstrate the loops.
 */
int main() {
    printf("Demonstrating forLoop:\n");
    forLoop();

    printf("\nDemonstrating nestedLoop:\n");
    nestedLoop();

    return 0;
}

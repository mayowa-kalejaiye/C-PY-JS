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
    printf("Using for loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while loop
    // Prints numbers from 1 to 5
    printf("Using while loop: ");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // do-while loop
    // Prints numbers from 1 to 5
    printf("Using do-while loop: ");
    int k = 1;
    do {
        printf("%d ", k);
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

    printf("Demonstrating nested loops:\n");
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
 * Real-Life Example: Calculate the Total Cost of Items in a Shopping Cart
 * 
 * Imagine you are building a simple program for an online store. The program needs to calculate the total cost of all items in a shopping cart. Each item in the cart has a price, and you need to sum up all the prices to get the total cost.
 */
void calculateTotalCost() {
    // Array to store the prices of items in the shopping cart
    float prices[] = {10.50, 25.75, 15.00, 30.25, 5.99};

    // Calculate the number of items in the array
    int numItems = sizeof(prices) / sizeof(prices[0]);

    // Variable to store the total cost
    float totalCost = 0.0;

    // Calculate the total cost using a for loop
    for (int i = 0; i < numItems; i++) {
        totalCost += prices[i]; // Add each item's price to the total cost
    }

    // Print the total cost
    printf("Total cost of items in the shopping cart: $%.2f\n", totalCost);
}

/**
 * Main function to demonstrate the loops and real-life example.
 */
int main() {
    // Demonstrate forLoop
    printf("Demonstrating forLoop:\n");
    forLoop();

    // Demonstrate nestedLoop
    printf("\nDemonstrating nestedLoop:\n");
    nestedLoop();

    // Demonstrate real-life example: Calculate total cost of items in a shopping cart
    printf("\nReal-Life Example: Calculate Total Cost of Items in a Shopping Cart\n");
    calculateTotalCost();

    return 0;
}

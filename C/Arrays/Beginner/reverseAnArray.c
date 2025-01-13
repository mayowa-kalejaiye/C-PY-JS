// Problem: Reverse an Array
// Write a program to reverse the elements of an array.

// Step 1: Understand the Problem
/*
    - we need to create an array of numbers.

    - We need to reverse the order of the elements in the array.

    - Finally, we need to print the reversed array.
*/

#include <stdio.h>

int main() {
    // Step 2: Declare and initialize the array
    int numbers[] = {10, 20, 30, 40, 50};

    // Step 3: Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Step 4: Reverse the array
    for (int i = 0; i < size / 2; i++) {
        // Swap numbers[i] with numbers[size - 1 - i]
        int temp = numbers[i];
        numbers[i] = numbers[size - 1 - i];
        numbers[size - 1 - i] = temp;
    }

    // Step 5: Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Output
// Reversed array: 50 40 30 20 10

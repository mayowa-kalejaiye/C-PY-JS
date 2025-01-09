// Problem: Maximum Element in an Array.
// Write a program to find the largest element in an array.

// Step 1: Understand the Problem
/*
    - We need to create an array of numbers.
    - We need to find the largest number in the array.
    - Finally, we need to print the largest number.
*/

#include <stdio.h>

int main() {
    // Step 2: Declare and Initialize the Array
    int numbers[] = {10, 20, 30, 40, 50};

    // Step 3: Calculate the Size of the Array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Step 4: Find the Maximum Element
    int max = numbers[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) { // Compare the current element with max
            max = numbers[i];   // Update max if the current element is larger
        }
    }

    // Step 5: Print the Result
    printf("The maximum element in the array is: %d\n", max);

    return 0;  // End of the program
}

// Output
// The maximum element in the array is: 50

/*
Possible questions:
1. Why was i = 1 used and not i = 0 in the loop condition?

Answer:
- We start by assuming the first element (`numbers[0]`) is the largest, so we initialize `max = numbers[0]`.
- The loop is used to compare the rest of the elements (`numbers[1]` to `numbers[size-1]`) with `max`.
- Starting with `i = 1` avoids comparing the first element with itself, which is unnecessary.
- If we started with `i = 0`, the first iteration would compare `numbers[0]` with itself, which is redundant.
- Therefore, `i = 1` is used to make the loop more efficient.
*/

// Problem: Sum of Array Elements
// Write a program to calculate the sum of all elements in an array.

/*
Step 1: Understand the Problem
    - We need to create an array of numbers.
    - We need to add up all the numbers in the array.
    - Finally, we need to print the sum.
*/

#include <stdio.h>

int main() {

    // Step 2: Declare and Initialize the Array
    int numbers[] = {10, 20, 30, 40, 50}; // Array of integers

    // Step 3: Calculate the Size of the Array
    // sizeof(numbers) gives the total size (in bytes) of the array.
    // sizeof(numbers[0]) gives the size of one element.
    // Dividing the two gives the number of elements in the array.
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Step 4: Initialize a variable to store the sum
    int sum = 0; // Start with sum = 0

    // Loop through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += numbers[i]; // Add the current element (numbers[i]) to sum
    }

    // Step 5: Print the Sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}


// Output
// Sum of array elements: 150


/*
Possible questions:
1. Why was < used and not <= in the loop condition?

Answer:
- Arrays in C are zero-indexed, meaning the first element is at index 0, and the last element is at index (size - 1).
- The loop condition `i < size` ensures that the loop runs for valid indices (0 to size - 1).
- If we used `i <= size`, the loop would try to access `numbers[size]`, which is out of bounds and invalid.
- Accessing an out-of-bounds index can lead to undefined behavior or runtime errors.
- Therefore, `<` is used to stay within the valid range of indices.
*/


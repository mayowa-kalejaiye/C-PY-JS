// Problem: Find the Minimum Element in an Array
// Write a program to find the smallest element in an array.

// Step 1: Understand the Problem
/*
    - We need to create an array of numbers.

    - We need to find the smallest number in the array.

    - Finally, we need to print the smallest number.
*/

#include <stdio.h>

int main() {
    // Step 2: Declare and initialize the array
    int numbers[] = {10, 20, 30, 40, 50};

    // Step 3: Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Step 4: Find the minimum element
    int min = numbers[0]; // Assume the first element is the smallest
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) { // Compare the current element with min
            min = numbers[i];   // Update min if the current element is smaller
        }
    }

    // Step 5: Print the result
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}

// Output:
// The minimum element in the array is: 10


// Possible Question and Answer
// Question:
//Why do we initialize min with numbers[0] instead of some other value (like 0 or a very large number)?

// Answer:
/*
We initialize min with numbers[0] because we need a valid starting point for comparison.

If we initialized min with 0 or a very large number, it might not reflect the actual smallest value in the array. For example:

If the array contains only positive numbers (e.g., {10, 20, 30}), initializing min with 0 would incorrectly make 0 the smallest value.

If the array contains very large numbers, initializing min with a fixed large number might not work if the actual smallest value is smaller than that fixed number.

By setting min = numbers[0], we ensure that the comparison starts with a valid element from the array, making the program work correctly for any set of numbers.
*/


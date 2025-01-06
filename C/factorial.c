#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, result;

    // Get input from the user
    printf("Input a number: ");
    scanf("%d", &number);

    // Calculate factorial
    if (number >= 0) {
        result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}

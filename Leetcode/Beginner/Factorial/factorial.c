// Question 2: Factorial of a Number
// Write a function to calculate the factorial of a number.

#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
} 

int main() {
    int result = factorial(5);
    printf("%d\n", result);
    return 0;
}

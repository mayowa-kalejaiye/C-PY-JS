// Problem : Sum of First N Natural Numbers
// Write a function to calculate the sum of the first N natural numbers.

#include <stdio.h>

int sumOfNaturals(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int result = sumOfNaturals(5);
    printf("Sum: %d\n", result);
    return 0;
}

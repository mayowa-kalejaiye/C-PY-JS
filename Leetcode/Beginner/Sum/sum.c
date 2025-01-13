// Problem : Sum of Two Numbers
// Write a function that takes two numbers and returns their sum.

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(6, 4);
    printf("Sum: %d\n", result);
    return 0;
}

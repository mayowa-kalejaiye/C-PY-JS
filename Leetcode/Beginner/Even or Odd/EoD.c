// Problem : Check if a Number is Even or Odd
// Write a function that checks if a number is even or odd.

#include <stdio.h>

void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

int main() {
    checkEvenOdd(6);
    return 0;
}

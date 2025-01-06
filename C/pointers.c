#include <stdio.h>

// Pointers
// Pointers are variables that store memory addresses.
int main() {
    int number = 42;
    int *ptr = &number; // ptr stores the address of number 

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}

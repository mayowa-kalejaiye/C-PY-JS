#include <stdio.h>

// Pointers
// Pointers are variables that store memory addresses.
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int *ptr = &number; // ptr stores the address of number 

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);

    return 0;
}

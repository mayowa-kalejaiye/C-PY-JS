#include <stdio.h>

int main() {
    int numbers, number, revNumbers = 0;

    // Take input from the user    
    printf("Enter a number: ");
    scanf("%d", &numbers);

    // Store the original number 
    number = numbers;

    // Reverse the number
    while (numbers != 0) { // Loop until the original number becomes 0
        int lastDigit = numbers % 10; // Extract the last digit
        revNumbers = revNumbers * 10 + lastDigit; // Append the last digit to the reversed number
        numbers /= 10; // Remove the last digit from the original number
    }
    
    if (revNumbers == number) {
        printf("%d -\n %d is a palindrome\n", revNumbers, number); // Print the reversed number
    } else {
        printf("%d -\n %d is not a palindrome\n", revNumbers, number); 
    }

    return 0;
}




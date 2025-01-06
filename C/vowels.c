#include <stdio.h>
#include <string.h> // For strlen()

// Function to count vowels in a string
int countVowels(char text[]) {
    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        char ch = tolower(text[i]); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char text[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin); // Use fgets to read a string with spaces

    // Count vowels
    int vowelCount = countVowels(text);
    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}

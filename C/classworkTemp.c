#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    float temperature;
    char repeat;

    do {
        // Display the menu
        printf("\nWelcome to the Temperature Converter!\n");
        printf("Choose an option:\n");
        printf("1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        // Get the user's choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue; // Skip the rest of the loop and start over
        }

        // Perform the chosen operation
        if (choice == 1 || choice == 2) {
            printf("Enter the temperature: ");
            if (scanf("%f", &temperature) != 1) {
                printf("Invalid input. Please enter a number.\n");
                while (getchar() != '\n'); // Clear the input buffer
                continue; // Skip the rest of the loop and start over
            }

            if (choice == 1) {
                float result = celsiusToFahrenheit(temperature);
                printf("%.2f°C is equal to %.2f°F.\n", temperature, result);
            } else if (choice == 2) {
                float result = fahrenheitToCelsius(temperature);
                printf("%.2f°F is equal to %.2f°C.\n", temperature, result);
            }
        } else if (choice == 3) {
            printf("Exiting the program. Goodbye!\n");
            break; // Exit the loop
        } else {
            printf("Invalid choice. Please try again.\n");
        }

        // Ask the user if they want to perform another conversion
        printf("Do you want to perform another conversion? (y/n): ");
        scanf(" %c", &repeat); // Note the space before %c to consume the newline character
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}

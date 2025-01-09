#include <stdio.h>

// Function to print Fahrenheit-Celsius table
void *fahrenheitToCelsius(int lower, int upper, int step) {
    float celsius, fahr;

    printf("Fahrenheit Celsius\n");
    printf("------------------\n");

    for (fahr = lower; fahr <= upper; fahr += step) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %12.1f\n", fahr, celsius);
    }
}


int main() {
    // Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
    fahrenheitToCelsius(0, 300, 20);

    return 0;
}

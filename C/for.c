#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20 
float calcTemperature() {
    int fahr; 

    for (fahr = LOWER; fahr >= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

int main() {
    // for loop
    for (int i = 1; i <=5; i++) {
        printf("%d", i);
    }
    printf("\n");

    // while loop
    int j = 1;
    while(j <= 5) {
        printf("%d", j);
        j++;
    } 
    printf("\n");

    // do-while loop
    int k = 1;
    do {
        printf("%d", k);
        k++;
    } while (k <= 5);
    printf("\n");
}




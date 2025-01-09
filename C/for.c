#include <stdio.h>

int forLoop() {
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




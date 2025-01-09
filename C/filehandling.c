#include <stdio.h>

int main() {
    // Write to a file
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);

    // Read from a file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[100];
    fscanf(file, "%s", buffer);
    printf("File content: %s\n", buffer);
    fclose(file);

    return 0;
}
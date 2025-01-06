#include <stdio.h>

/*Structures
What are Structures?
Structures are user-defined data types that group related variables.*/

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Create a structure variable
    struct Person person1 = {"Alice", 25};

    // Access structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}

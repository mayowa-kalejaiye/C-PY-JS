#include <Stdio.h>
/*Write a program that stores student details (name, age, grade) in a structure and displays them.*/
struct Student {
    char name[100];
    int age;
    char grade;
};

int main() {
    struct Student student1 = {"Mayowa", 16, 'A'};

    printf("Student name: %s\n", student1.name);
    printf("Student grade: %c\n", student1.grade);
    printf("Student age: %d\n", student1.age);
}

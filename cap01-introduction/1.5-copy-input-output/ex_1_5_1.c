#include <stdio.h>

// Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
int exercise_1_6() {
    printf("getchar() != EOF = %d \n", getchar() != EOF);
    return 0;
}

// Exercise 1-7. Write a program to print the value of EOF.
int exercise_1_7() {
    printf("value of EOF = %d \n", EOF);
    return 0;
}

int main() {
    exercise_1_6();
    exercise_1_7();
}

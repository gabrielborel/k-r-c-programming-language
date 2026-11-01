#include <stdio.h>

// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
int exercise_1_8() {
    int c, bl, tb, nl;
    bl = tb = nl = 0;

    printf("Program to count blanks, tabs and newlines, type a \n");

    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\n':
            nl++;
            break;
        case '\t':
            tb++;
            break;
        case ' ':
            bl++;
            break;
        default:
            break;
        }
    }

    printf("\nblanks = %d \ntabs = %d \nnewlines = %d \n", bl, tb, nl);

    return 0;
}

// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one
// or more blanks by a single blank.
int exercise_1_9() {
    int c, bc = 0;

    printf("program to copy its input to its output, replacing each string of one or more blanks "
           "by a single blank, type a \n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++bc;       // blank count
            if (bc > 1) // if more than one blank comes in sequentially, only one gets printed
                continue;
        } else {
            bc = 0;
        }
        putchar(c);
    }

    return 0;
}

// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each
// backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an
// unambiguous way.
int exercise_1_10() {
    int c;

    printf("program to copy its input to its output, replacing each tab by \\t, each backspace by "
           "\\b, and each backslash by \\. This makes tabs and backspaces visible in an "
           "unambiguous way, type a text. \n");

    while ((c = getchar()) != EOF) {
        switch (c) {
        case '\t':
            putchar('\\');
            putchar('t');
            break;

        case '\b':
            putchar('b');
            break;

        case '\\':
            putchar('\\');
            putchar('\\');
            break;

        default:
            putchar(c);
            break;
        }
    }

    return 0;
}

int main() {
    // exercise_1_8();
    // exercise_1_9();
    exercise_1_10();
    return 0;
}
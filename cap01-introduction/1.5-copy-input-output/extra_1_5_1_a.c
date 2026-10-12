#include <stdio.h>

int main(void) {
    int c;
    while (c = getchar() != EOF)
        putchar(c);
    return 0;
}

// c is never assigned the value of getchar(): because != has higher
// precedence than =, c gets the result of (getchar() != EOF), which is 0 or 1.
// For every character read, c is 1 and putchar(1) runs. When getchar()
// returns EOF, c becomes 0, the while condition is false, and the loop ends,
// so putchar(0) is never called.
// Nothing shows on the terminal because 0x01 is an ASCII control character
// (SOH), not a printable one. The bytes are written to stdout, but the
// terminal has nothing to draw. Running `printf 'hi' | ./a | xxd` shows them.
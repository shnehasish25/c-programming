#include <stdio.h>

int main() {
    char *msg = "Pointers and Strings";
    while (*msg) {
        putchar(*msg);
        msg++;
    }
    putchar('\n');
    return 0;
}

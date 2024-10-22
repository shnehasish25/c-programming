#include <stdio.h>

int main() {
    int oct = 55;
    int dec = 0, base = 1, t = oct;
    while (t > 0) {
        dec += (t % 10) * base;
        base *= 8;
        t /= 10;
    }
    printf("Octal %d = Decimal %d\n", oct, dec);
    return 0;
}

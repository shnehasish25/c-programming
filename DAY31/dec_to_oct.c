#include <stdio.h>

int main() {
    int n = 45;
    int oct = 0, place = 1, t = n;
    while (t > 0) {
        oct += (t % 8) * place;
        place *= 10;
        t /= 8;
    }
    printf("Decimal %d = Octal %d\n", n, oct);
    return 0;
}

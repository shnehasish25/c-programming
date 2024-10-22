#include <stdio.h>

int main() {
    long long bin = 11001;
    int dec = 0, base = 1;
    long long t = bin;
    while (t > 0) {
        int last = t % 10;
        dec += last * base;
        base *= 2;
        t /= 10;
    }
    printf("Binary %lld = Decimal %d\n", bin, dec);
    return 0;
}

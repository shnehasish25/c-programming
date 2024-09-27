#include <stdio.h>

int main() {
    int base = 2, exp = 8;
    long long res = 1;
    for (int i = 0; i < exp; i++) res *= base;
    printf("%d^%d = %lld\n", base, exp, res);
    return 0;
}

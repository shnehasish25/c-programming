#include <stdio.h>

long long int_pow(int base, int exp) {
    long long res = 1;
    while (exp > 0) { res *= base; exp--; }
    return res;
}

int main() {
    printf("2^5 = %lld\n", int_pow(2, 5));
    return 0;
}

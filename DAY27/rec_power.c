#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    printf("2^6 = %lld\n", power(2, 6));
    printf("3^4 = %lld\n", power(3, 4));
    return 0;
}

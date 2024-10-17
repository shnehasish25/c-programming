#include <stdio.h>

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
    printf("5! = %lld\n", fact(5));
    printf("6! = %lld\n", fact(6));
    return 0;
}

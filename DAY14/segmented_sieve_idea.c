#include <stdio.h>

int main() {
    // simple prime sieve preview for small limit
    int is_prime[30];
    for (int i = 0; i < 30; i++) is_prime[i] = 1;
    is_prime[0] = is_prime[1] = 0;
    for (int p = 2; p * p < 30; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < 30; i += p) is_prime[i] = 0;
        }
    }
    printf("Primes < 30: ");
    for (int i = 0; i < 30; i++) if (is_prime[i]) printf("%d ", i);
    printf("\n");
    return 0;
}

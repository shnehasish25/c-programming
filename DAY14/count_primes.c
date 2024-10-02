#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 2; i <= 50; i++) {
        int ok = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { ok = 0; break; }
        }
        if (ok) count++;
    }
    printf("Primes up to 50: %d\n", count);
    return 0;
}

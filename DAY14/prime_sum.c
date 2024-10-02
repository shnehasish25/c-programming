#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 2; i <= 20; i++) {
        int ok = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { ok = 0; break; }
        }
        if (ok) sum += i;
    }
    printf("Sum of primes up to 20: %d\n", sum);
    return 0;
}

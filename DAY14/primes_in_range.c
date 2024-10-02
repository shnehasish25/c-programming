#include <stdio.h>

int main() {
    int low = 10, high = 30;
    printf("Primes between %d and %d: ", low, high);
    for (int i = low; i <= high; i++) {
        int prime = 1;
        if (i < 2) continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) { prime = 0; break; }
        }
        if (prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}

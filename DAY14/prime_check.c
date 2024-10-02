#include <stdio.h>

int main() {
    int n = 29, is_prime = 1;
    if (n <= 1) is_prime = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime) printf("%d is prime\n", n);
    else printf("%d is composite\n", n);
    return 0;
}

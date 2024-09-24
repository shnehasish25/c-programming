#include <stdio.h>

int main() {
    int n = 345, prod = 1, t = n;
    while (t > 0) {
        prod *= (t % 10);
        t /= 10;
    }
    printf("Product of digits in %d is %d\n", n, prod);
    return 0;
}

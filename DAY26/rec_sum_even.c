#include <stdio.h>

int sum_evens(int n) {
    if (n <= 0) return 0;
    if (n % 2 == 0) return n + sum_evens(n - 2);
    return sum_evens(n - 1);
}

int main() {
    printf("Sum evens up to 10: %d\n", sum_evens(10));
    return 0;
}

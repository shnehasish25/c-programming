#include <stdio.h>

int sum_n(int n) {
    if (n <= 0) return 0;
    return n + sum_n(n - 1);
}

int main() {
    printf("Sum of 1..10 = %d\n", sum_n(10));
    return 0;
}

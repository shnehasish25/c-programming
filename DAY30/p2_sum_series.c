#include <stdio.h>

// 1 + 2 + 3 + ... + n recursively
int series_sum(int n) {
    if (n <= 1) return n;
    return n + series_sum(n - 1);
}

int main() {
    printf("Series sum(10) = %d\n", series_sum(10));
    return 0;
}

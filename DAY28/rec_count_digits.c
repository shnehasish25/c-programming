#include <stdio.h>

int count_digits(int n) {
    if (n == 0) return 0;
    return 1 + count_digits(n / 10);
}

int main() {
    printf("Digits in 45678: %d\n", count_digits(45678));
    return 0;
}

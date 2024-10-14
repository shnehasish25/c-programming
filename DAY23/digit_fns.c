#include <stdio.h>

int sum_digits(int n) {
    int s = 0;
    while (n > 0) { s += n % 10; n /= 10; }
    return s;
}

int count_digits(int n) {
    int c = 0;
    while (n > 0) { c++; n /= 10; }
    return c;
}

int main() {
    int n = 4321;
    printf("Digits in %d: count=%d, sum=%d\n", n, count_digits(n), sum_digits(n));
    return 0;
}

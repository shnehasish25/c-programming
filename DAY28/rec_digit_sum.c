#include <stdio.h>

int sum_digits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    printf("Sum digits of 987: %d\n", sum_digits(987));
    return 0;
}

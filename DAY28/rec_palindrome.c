#include <stdio.h>

int rev(int n, int acc) {
    if (n == 0) return acc;
    return rev(n / 10, acc * 10 + n % 10);
}

int is_pal(int n) {
    return n == rev(n, 0);
}

int main() {
    printf("12321 is pal? %d\n", is_pal(12321));
    printf("12345 is pal? %d\n", is_pal(12345));
    return 0;
}

#include <stdio.h>

int rev_helper(int n, int rev) {
    if (n == 0) return rev;
    return rev_helper(n / 10, rev * 10 + (n % 10));
}

int reverse_num(int n) {
    return rev_helper(n, 0);
}

int main() {
    printf("Reverse 1234: %d\n", reverse_num(1234));
    return 0;
}

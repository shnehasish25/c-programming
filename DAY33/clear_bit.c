#include <stdio.h>

int clear_kth_bit(int n, int k) {
    return n & ~(1 << k);
}

int main() {
    printf("Clear 2nd bit of 7: %d\n", clear_kth_bit(7, 2));
    return 0;
}

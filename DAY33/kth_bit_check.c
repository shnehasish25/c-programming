#include <stdio.h>

int is_kth_bit_set(int n, int k) {
    return ((n & (1 << k)) != 0);
}

int main() {
    printf("Is 2nd bit set in 5: %d\n", is_kth_bit_set(5, 2));
    printf("Is 1st bit set in 5: %d\n", is_kth_bit_set(5, 1));
    return 0;
}

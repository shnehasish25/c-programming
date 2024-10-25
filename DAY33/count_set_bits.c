#include <stdio.h>

int count_set_bits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    printf("Set bits in 29: %d\n", count_set_bits(29));
    return 0;
}

#include <stdio.h>

int main() {
    int n = 12; // 1100
    int res = n & (n - 1); // 1000 = 8
    printf("Turning off rightmost set bit in %d: %d\n", n, res);
    return 0;
}

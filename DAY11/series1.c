#include <stdio.h>

int main() {
    // 1 + 1/2 + 1/3 + ... + 1/n
    int n = 5;
    double sum = 0.0;
    for (int i = 1; i <= n; i++) sum += 1.0 / i;
    printf("Harmonic sum for n=%d: %.4f\n", n, sum);
    return 0;
}

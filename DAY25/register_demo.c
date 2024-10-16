#include <stdio.h>

int main() {
    register int fast_i;
    int sum = 0;
    for (fast_i = 0; fast_i < 1000; fast_i++) {
        sum += (fast_i % 2);
    }
    printf("Sum: %d\n", sum);
    return 0;
}

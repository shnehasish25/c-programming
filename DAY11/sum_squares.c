#include <stdio.h>

int main() {
    int n = 5, sum = 0;
    for (int i = 1; i <= n; i++) sum += (i * i);
    printf("Sum of squares up to %d is %d\n", n, sum);
    return 0;
}

#include <stdio.h>

int main() {
    int n = 7, a = 0, b = 1, sum = 1;
    for (int i = 2; i < n; i++) {
        int c = a + b;
        sum += c;
        a = b;
        b = c;
    }
    printf("Sum of first %d Fibonacci numbers: %d\n", n, sum);
    return 0;
}

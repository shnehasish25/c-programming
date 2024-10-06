#include <stdio.h>

int main() {
    int n = 8;
    if (n <= 1) { printf("%d\n", n); return 0; }
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d-th Fibonacci term is %d\n", n, b);
    return 0;
}

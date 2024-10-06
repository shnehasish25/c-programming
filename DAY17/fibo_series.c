#include <stdio.h>

int main() {
    int n = 10;
    int a = 0, b = 1;
    printf("Fibonacci (%d terms): %d %d ", n, a, b);
    for (int i = 2; i < n; i++) {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}

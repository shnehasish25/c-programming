#include <stdio.h>

void compute(int a, int b, int *s, int *p) {
    *s = a + b;
    *p = a * b;
}

int main() {
    int s, p;
    compute(6, 7, &s, &p);
    printf("Sum: %d, Product: %d\n", s, p);
    return 0;
}

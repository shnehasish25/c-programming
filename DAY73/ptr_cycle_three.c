#include <stdio.h>

void cycle(int *a, int *b, int *c) {
    int t = *c;
    *c = *b;
    *b = *a;
    *a = t;
}

int main() {
    int x = 1, y = 2, z = 3;
    cycle(&x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    return 0;
}

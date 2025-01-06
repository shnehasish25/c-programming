#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x = 7, y = 14;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

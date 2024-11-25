#include <stdio.h>

int main() {
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;
    if (c1 == r2) {
        printf("Multiplication is possible, result size: %dx%d\n", r1, c2);
    } else {
        printf("Multiplication not possible\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int m[2][2] = {{1, 2}, {3, 4}};
    int r1 = m[0][0] + m[0][1];
    int r2 = m[1][0] + m[1][1];
    printf("Row 1 sum: %d, Row 2 sum: %d\n", r1, r2);
    return 0;
}

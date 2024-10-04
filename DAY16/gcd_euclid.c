#include <stdio.h>

int main() {
    int a = 56, b = 98;
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    printf("GCD(%d, %d) using Euclidean algo is %d\n", a, b, x);
    return 0;
}

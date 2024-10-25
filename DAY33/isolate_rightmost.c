#include <stdio.h>

int main() {
    int n = 12;
    int rightmost = n & (-n);
    printf("Rightmost set bit of %d is %d\n", n, rightmost);
    return 0;
}

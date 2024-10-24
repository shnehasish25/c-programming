#include <stdio.h>

int main() {
    int a = 12; // 1100
    int b = 10; // 1010
    printf("a & b = %d\n", a & b); // 1000 = 8
    printf("a | b = %d\n", a | b); // 1110 = 14
    return 0;
}

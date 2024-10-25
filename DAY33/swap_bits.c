#include <stdio.h>

int main() {
    int a = 23, b = 47;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR swap: a=%d, b=%d\n", a, b);
    return 0;
}

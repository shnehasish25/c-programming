#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int main() {
    printf("Add: %d, Sub: %d, Mul: %d\n", add(10, 5), sub(10, 5), mul(10, 5));
    return 0;
}

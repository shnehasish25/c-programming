#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int res = add(14, 28);
    printf("Result: %d\n", res);
    return 0;
}

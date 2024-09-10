#include <stdio.h>

int main() {
    int a = 15, b = 30;
    // swap without 3rd variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

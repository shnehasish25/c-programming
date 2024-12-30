#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Addr a: %p, Addr b: %p\n", (void*)&a, (void*)&b);
    return 0;
}

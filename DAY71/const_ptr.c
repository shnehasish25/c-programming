#include <stdio.h>

int main() {
    int val = 100;
    int *const ptr = &val; // const pointer
    *ptr = 200;
    printf("val: %d\n", *ptr);
    return 0;
}

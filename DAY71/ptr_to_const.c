#include <stdio.h>

int main() {
    int val = 50;
    const int *ptr = &val; // pointer to const
    printf("val: %d\n", *ptr);
    return 0;
}

#include <stdio.h>

void double_val(int *x) {
    *x *= 2;
}

int main() {
    int num = 25;
    double_val(&num);
    printf("Doubled: %d\n", num);
    return 0;
}

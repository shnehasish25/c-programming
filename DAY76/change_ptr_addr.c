#include <stdio.h>

void allocate_static(int **pp, int *target) {
    *pp = target;
}

int main() {
    int a = 10, b = 20;
    int *p = &a;
    allocate_static(&p, &b);
    printf("p now points to: %d\n", *p);
    return 0;
}

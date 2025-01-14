#include <stdio.h>

int main() {
    int val = 99;
    int *p = &val;
    int **pp = &p;

    printf("val = %d, *p = %d, **pp = %d\n", val, *p, **pp);
    return 0;
}

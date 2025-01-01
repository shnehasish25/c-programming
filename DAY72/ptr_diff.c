#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *p1 = &a[1];
    int *p2 = &a[4];
    printf("Distance: %ld elements\n", p2 - p1);
    return 0;
}

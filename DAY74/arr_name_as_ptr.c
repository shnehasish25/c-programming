#include <stdio.h>

int main() {
    int a[] = {100, 200, 300};
    printf("a = %p, &a[0] = %p\n", (void*)a, (void*)&a[0]);
    printf("*a = %d\n", *a);
    return 0;
}

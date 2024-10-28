#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int prod = 1;
    for (int i = 0; i < 5; i++) prod *= a[i];
    printf("Product: %d\n", prod);
    return 0;
}

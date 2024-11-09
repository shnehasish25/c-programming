#include <stdio.h>

int main() {
    int a[] = {4, 1, 2, 1, 2};
    int n = 5, xor_all = 0;
    for (int i = 0; i < n; i++) xor_all ^= a[i];
    printf("Element appearing once: %d\n", xor_all);
    return 0;
}

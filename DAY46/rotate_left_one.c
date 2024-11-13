#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5, first = a[0];
    for (int i = 0; i < n - 1; i++) a[i] = a[i + 1];
    a[n - 1] = first;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

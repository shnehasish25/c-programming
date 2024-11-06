#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int first = a[0];
    for (int i = 0; i < 4; i++) a[i] = a[i + 1];
    a[4] = first;
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

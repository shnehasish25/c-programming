#include <stdio.h>

int main() {
    int a[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) a[j++] = a[i];
    }
    a[j++] = a[n - 1];
    for (int i = 0; i < j; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

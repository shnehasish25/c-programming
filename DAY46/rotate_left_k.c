#include <stdio.h>

void rotate_by_one(int a[], int n) {
    int temp = a[0];
    for (int i = 0; i < n - 1; i++) a[i] = a[i + 1];
    a[n - 1] = temp;
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3, n = 7;
    for (int i = 0; i < k; i++) rotate_by_one(a, n);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

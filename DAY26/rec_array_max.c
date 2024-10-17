#include <stdio.h>

int arr_max(int a[], int n) {
    if (n == 1) return a[0];
    int sub = arr_max(a, n - 1);
    return a[n - 1] > sub ? a[n - 1] : sub;
}

int main() {
    int a[] = {3, 9, 2, 14, 5};
    printf("Max: %d\n", arr_max(a, 5));
    return 0;
}

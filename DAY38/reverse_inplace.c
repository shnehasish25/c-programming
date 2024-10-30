#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int l = 0, r = n - 1;
    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
    printf("Reversed: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

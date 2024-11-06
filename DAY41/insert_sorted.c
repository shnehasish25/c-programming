#include <stdio.h>

int main() {
    int a[10] = {10, 20, 30, 50, 60};
    int n = 5, val = 40;
    int i = n - 1;
    while (i >= 0 && a[i] > val) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = val;
    n++;
    for (int j = 0; j < n; j++) printf("%d ", a[j]);
    printf("\n");
    return 0;
}

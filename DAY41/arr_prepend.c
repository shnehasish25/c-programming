#include <stdio.h>

int main() {
    int a[6] = {20, 30, 40};
    int n = 3, val = 10;
    for (int i = n; i > 0; i--) a[i] = a[i - 1];
    a[0] = val;
    n++;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

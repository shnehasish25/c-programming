#include <stdio.h>

int main() {
    int a[] = {0, 1, 0, 3, 12};
    int n = 5, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) a[count++] = a[i];
    }
    while (count < n) a[count++] = 0;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

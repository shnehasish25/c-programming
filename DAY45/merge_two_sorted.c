#include <stdio.h>

int main() {
    int a[] = {1, 4, 7, 10}, b[] = {2, 3, 8, 11};
    int n1 = 4, n2 = 4, c[8];
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];
    for (int idx = 0; idx < 8; idx++) printf("%d ", c[idx]);
    printf("\n");
    return 0;
}

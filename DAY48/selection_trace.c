#include <stdio.h>

int main() {
    int a[] = {5, 2, 4, 1};
    int n = 4;
    for (int i = 0; i < n - 1; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) if (a[j] < a[m]) m = j;
        int t = a[i]; a[i] = a[m]; a[m] = t;
        printf("Step %d: min was %d\n", i + 1, a[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int a[] = {34, 12, 89, 5, 67, 23};
    int n = 6;
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("Min = %d, Max = %d\n", min, max);
    return 0;
}

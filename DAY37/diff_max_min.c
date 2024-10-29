#include <stdio.h>

int main() {
    int a[] = {14, 2, 88, 31, 5};
    int mn = a[0], mx = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }
    printf("Span (max - min) = %d\n", mx - mn);
    return 0;
}

#include <stdio.h>

void find_extrema(int *a, int n, int *mn, int *mx) {
    *mn = *a; *mx = *a;
    for (int i = 1; i < n; i++) {
        if (*(a + i) < *mn) *mn = *(a + i);
        if (*(a + i) > *mx) *mx = *(a + i);
    }
}

int main() {
    int arr[] = {3, 15, 7, 2, 9};
    int mn, mx;
    find_extrema(arr, 5, &mn, &mx);
    printf("Min: %d, Max: %d\n", mn, mx);
    return 0;
}

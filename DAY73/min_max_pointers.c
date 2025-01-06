#include <stdio.h>

void find_min_max(int a[], int n, int *mn, int *mx) {
    *mn = a[0]; *mx = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < *mn) *mn = a[i];
        if (a[i] > *mx) *mx = a[i];
    }
}

int main() {
    int nums[] = {14, 2, 88, 5};
    int mn, mx;
    find_min_max(nums, 4, &mn, &mx);
    printf("Min: %d, Max: %d\n", mn, mx);
    return 0;
}

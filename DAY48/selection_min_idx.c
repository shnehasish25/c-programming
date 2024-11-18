#include <stdio.h>

int find_min_index(int a[], int start, int n) {
    int m = start;
    for (int i = start + 1; i < n; i++) {
        if (a[i] < a[m]) m = i;
    }
    return m;
}

int main() {
    int a[] = {8, 3, 5, 1, 9};
    printf("Min index from 1..4 is %d\n", find_min_index(a, 1, 5));
    return 0;
}
